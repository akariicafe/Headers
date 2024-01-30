@class MPModelPodcastEpisodeKind;

@interface MPModelPodcastKind : MPModelKind

@property (readonly, nonatomic) MPModelPodcastEpisodeKind *episodeKind;

+ (id)kindWithEpisodeKind:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)identityKind;

- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)humanDescription;
- (void)encodeWithCoder:(id)a0;

@end
