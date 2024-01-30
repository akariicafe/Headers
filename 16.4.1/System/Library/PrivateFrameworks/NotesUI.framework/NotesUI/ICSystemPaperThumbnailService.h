@class ICSystemPaperThumbnailServiceInternal;

@interface ICSystemPaperThumbnailService : NSObject

@property (class, readonly, nonatomic) ICSystemPaperThumbnailService *sharedService;

@property (retain, nonatomic) ICSystemPaperThumbnailServiceInternal *systemPaperThumbnailService;

- (void)cancel;
- (void)invalidate;
- (void).cxx_destruct;
- (void)observe;
- (id)initWithSystemPaperThumbnailService:(id)a0;
- (void)invalidateForNote:(id)a0;
- (void)updateIfNeededForNote:(id)a0 completion:(id /* block */)a1;
- (void)updateIfNeededWithCompletion:(id /* block */)a0;

@end
