@interface MPModelPodcastEpisodeKind : MPModelKind

@property (readonly, nonatomic) unsigned long long variants;
@property (readonly, nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;
+ (id)kindWithVariants:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)identityKind;

- (id)humanDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })predicateWithBaseProperty:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
