@class AURemoteExtensionContext;

@interface AUAudioUnitViewService : UIViewController

@property AURemoteExtensionContext *auRemoteExtensionContext;

- (void)dealloc;
- (void)loadView;
- (void)initializeBlankView;
- (void)connectChildView;

@end
