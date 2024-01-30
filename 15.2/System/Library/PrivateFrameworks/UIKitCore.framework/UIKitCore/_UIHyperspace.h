@class NSString;

@interface _UIHyperspace : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_closestPoint:(double *)a0 toPoint:(const double *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDimensions:(unsigned long long)a0;

@end
