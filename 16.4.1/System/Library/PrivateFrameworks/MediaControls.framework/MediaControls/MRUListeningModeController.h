@class MRUListeningMode, NSString, MRUSystemOutputDeviceRouteController;
@protocol MRUListeningModeControllerDelegate;

@interface MRUListeningModeController : NSObject <MRUSystemOutputDeviceRouteControllerObserver>

@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (weak, nonatomic) id<MRUListeningModeControllerDelegate> delegate;
@property (readonly, nonatomic) MRUListeningMode *primaryListeningMode;
@property (readonly, nonatomic) MRUListeningMode *secondaryListeningMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setListeningMode:(id)a0 forOutputDeviceRoute:(id)a1 previousListeningMode:(id)a2 completion:(id /* block */)a3;
- (void)setSecondaryListeningMode:(id)a0 completion:(id /* block */)a1;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (void)updateListeningMode;
- (void)setPrimaryListeningMode:(id)a0 completion:(id /* block */)a1;
- (id)listeningModeErrorMessageForOutputDevice:(id)a0;
- (void).cxx_destruct;

@end
