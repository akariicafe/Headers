@protocol CNUILikenessRendering, CNSchedulerProvider, CNUIPRLikenessResolver;

@interface CNAvatarImageRenderer : NSObject

@property (readonly, nonatomic) id<CNUIPRLikenessResolver> resolver;
@property (readonly, nonatomic) id<CNUILikenessRendering> renderer;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;

+ (id)descriptorForRequiredKeys;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)loadingPlaceholderImageProvider;
- (id)renderAvatarsForContacts:(id)a0 handler:(id /* block */)a1;
- (id)renderAvatarsForContacts:(id)a0 scope:(id)a1 includePlaceholder:(BOOL)a2 imageHandler:(id /* block */)a3;
- (id)renderAvatarsForContacts:(id)a0 scope:(id)a1 imageHandler:(id /* block */)a2;
- (id)avatarImageForContacts:(id)a0 scope:(id)a1;
- (id)placeholderImageProvider;
- (id)renderMonogramForString:(id)a0 handler:(id /* block */)a1;
- (id)renderedLikenessesForContacts:(id)a0 scope:(id)a1 placeholder:(BOOL)a2 workScheduler:(id)a3;
- (id)renderedMonogramObservableForString:(id)a0 scope:(id)a1;
- (id)runScopeBasedImageObservable:(id /* block */)a0 scope:(id)a1 imageHandler:(id /* block */)a2;
- (id)renderMonogramForContact:(id)a0 color:(id)a1 scope:(id)a2 prohibitedSources:(long long)a3;
- (id)renderMonogramForString:(id)a0 scope:(id)a1 imageHandler:(id /* block */)a2;
- (id)renderMonogramForString:(id)a0 color:(id)a1 scope:(id)a2 prohibitedSources:(long long)a3;
- (id)renderAvatarsForContacts:(id)a0 scope:(id)a1 placeholder:(BOOL)a2 workScheduler:(id)a3 imageHandler:(id /* block */)a4;

@end
