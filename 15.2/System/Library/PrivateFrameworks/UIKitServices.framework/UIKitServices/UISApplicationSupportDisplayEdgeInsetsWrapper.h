@class NSString;

@interface UISApplicationSupportDisplayEdgeInsetsWrapper : NSObject <BSXPCCoding, NSCopying>

@property (nonatomic) double topInset;
@property (nonatomic) double leftInset;
@property (nonatomic) double bottomInset;
@property (nonatomic) double rightInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithTop:(double)a0 left:(double)a1 bottom:(double)a2 right:(double)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
