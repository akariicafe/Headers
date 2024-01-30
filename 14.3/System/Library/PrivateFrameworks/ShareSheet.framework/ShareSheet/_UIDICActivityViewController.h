@class NSString, UIDocumentInteractionController;
@protocol _UIDICActivityViewControllerDelegate;

@interface _UIDICActivityViewController : UIActivityViewController

@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) id<_UIDICActivityViewControllerDelegate> documentInteractionActivityDelegateRetained;
@property (nonatomic) BOOL isPerformingActivity;
@property (retain, nonatomic) NSString *openActivityTargetApplicationIdentifier;
@property (weak, nonatomic) UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> *documentInteractionActivityDelegate;

- (id)initWithActivityItems:(id)a0 applicationActivities:(id)a1 options:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)_handleDidFinishPerformingActivityType:(id)a0 completed:(BOOL)a1 resultItems:(id)a2 activityError:(id)a3;
- (BOOL)hidesSystemActivities;
- (void)_prepareActivity:(id)a0;
- (void)_willPerformInServiceActivityType:(id)a0 activitySpecificMetadata:(id)a1;
- (BOOL)_shouldShowSystemActivityType:(id)a0;
- (void)_performActivity:(id)a0;

@end
