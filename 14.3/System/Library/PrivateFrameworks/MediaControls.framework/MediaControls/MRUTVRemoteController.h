@class NSString, MediaControlsEndpointController;

@interface MRUTVRemoteController : NSObject

@property (readonly, nonatomic) MediaControlsEndpointController *endpointController;
@property (readonly, nonatomic) NSString *mediaRemoteIdentifier;
@property (readonly, nonatomic) NSString *airplayIdentifier;
@property (readonly, nonatomic) BOOL shouldShowTVRemoteButton;
@property (nonatomic) BOOL isCoverSheet;

- (void).cxx_destruct;
- (void)presentTVRemote;
- (void)prewarmIfNeeded;
- (id)initWithEndpointController:(id)a0;
- (void)presentLanguageOptionsAtCenter:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
