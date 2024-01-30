@class NSString;

@interface AXEventAccelerometerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int type;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)accessibilityEventRepresentationTabularDescription;
- (void)encodeWithCoder:(id)a0;

@end
