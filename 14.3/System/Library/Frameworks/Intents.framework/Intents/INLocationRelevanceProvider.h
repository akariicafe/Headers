@class CLRegion;

@interface INLocationRelevanceProvider : INRelevanceProvider

@property (readonly, copy, nonatomic) CLRegion *region;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRegion:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
