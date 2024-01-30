@class MPModelTVEpisodeKind;

@interface MPModelTVSeasonKind : MPModelKind

@property (readonly, nonatomic) MPModelTVEpisodeKind *episodeKind;

+ (BOOL)supportsSecureCoding;
+ (id)kindWithEpisodeKind:(id)a0;
+ (id)identityKind;

- (id)humanDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
- (void).cxx_destruct;

@end
