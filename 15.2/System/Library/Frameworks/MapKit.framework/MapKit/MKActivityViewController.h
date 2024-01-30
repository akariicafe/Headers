@class NSString;
@protocol MKActivityViewControllerDelegate;

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate>

@property (weak, nonatomic) id<MKActivityViewControllerDelegate> activityControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)_completionHandler;
- (void).cxx_destruct;
- (id /* block */)_activityHandler;
- (id)initWithMapItem:(id)a0 contact:(id)a1 applicationActivities:(id)a2 activityProviderDelegate:(id)a3;
- (id)initWithShareItem:(id)a0;
- (id)initWithActivityItems:(id)a0;
- (id)initWithMapItem:(id)a0 contact:(id)a1 applicationActivities:(id)a2;
- (id)initWithSource:(id)a0 destination:(id)a1 composedRoute:(id)a2 applicationActivities:(id)a3 routeProviderDelegate:(id)a4;

@end
