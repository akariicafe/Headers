@class NSString, MediaControlsEndpointController;

@interface MRUTVRemoteController : NSObject <_MCStateDumpPropertyListTransformable>

@property (readonly, nonatomic) MediaControlsEndpointController *endpointController;
@property (readonly, nonatomic) NSString *mediaRemoteIdentifier;
@property (readonly, nonatomic) NSString *airplayIdentifier;
@property (readonly, nonatomic) BOOL shouldShowTVRemoteButton;
@property (nonatomic) BOOL isCoverSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEndpointController:(id)a0;
- (void)prewarmIfNeeded;
- (void).cxx_destruct;
- (void)presentTVRemote;
- (void)presentLanguageOptionsAtCenter:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)_stateDumpObject;

@end
