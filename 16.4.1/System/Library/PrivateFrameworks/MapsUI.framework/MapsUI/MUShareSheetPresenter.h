@class NSString, MUActivityViewController, MUPresentationOptions;
@protocol _MKPlaceItem, MUShareSheetPresenterDelegate;

@interface MUShareSheetPresenter : NSObject <MUActivityViewControllerDelegate> {
    MUActivityViewController *_activityViewController;
}

@property (readonly, nonatomic) MUPresentationOptions *presentationOptions;
@property (readonly, nonatomic) id<_MKPlaceItem> placeItem;
@property (weak, nonatomic) id<MUShareSheetPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)present;
- (void).cxx_destruct;
- (id)initWithPlaceItem:(id)a0 presentationOptions:(id)a1;
- (void)mapkitActivityViewController:(id)a0 postCompletedActivityOfType:(id)a1 completed:(BOOL)a2;
- (void)mapkitActivityViewController:(id)a0 preCompletedActivityOfType:(id)a1 completed:(BOOL)a2;

@end
