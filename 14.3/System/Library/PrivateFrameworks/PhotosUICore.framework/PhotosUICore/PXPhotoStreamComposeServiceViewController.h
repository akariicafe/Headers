@class NSString;
@protocol PXPhotoStreamComposeServiceDelegate;

@interface PXPhotoStreamComposeServiceViewController : SLComposeServiceViewController

@property (weak, nonatomic) id<PXPhotoStreamComposeServiceDelegate> delegate;
@property (nonatomic) BOOL shouldAllowAlbumPicking;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL addToExistingWorkflow;
@property (retain, nonatomic) NSString *albumTitle;

+ (void)initialize;
+ (void)registerCanonicalClass:(Class)a0;
+ (id)createCanonicalInstance;

- (void).cxx_destruct;
- (void)setSourcesToShare:(id)a0;
- (void)setAssetsToShare:(id)a0;

@end
