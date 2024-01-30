@class NSArray, NSString;

@interface _UIPackedRegion : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setRegions:) NSArray *_regions;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSelf;

- (id)initWithDimensions:(unsigned long long)a0;
- (void)_closestPoint:(double *)a0 toPoint:(const double *)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)_isBoundaryCrossedFromPoint:(const double *)a0 toPoint:(const double *)a1;
- (BOOL)isEqual:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)encodeWithCoder:(id)a0;

@end
