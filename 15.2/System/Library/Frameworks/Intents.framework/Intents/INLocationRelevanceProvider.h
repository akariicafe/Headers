@class CLRegion;

@interface INLocationRelevanceProvider : INRelevanceProvider

@property (readonly, copy, nonatomic) CLRegion *region;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithRegion:(id)a0;

@end
