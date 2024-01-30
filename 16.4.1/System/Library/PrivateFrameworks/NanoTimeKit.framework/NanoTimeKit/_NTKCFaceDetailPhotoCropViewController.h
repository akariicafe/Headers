@class UIView, NSString, NTKDigitalTimeLabel, NTKCCenteringScrollView, CAShapeLayer, NTKDigitalTimeLabelStyle, NTKCompanionCustomPhotosEditor, UIBarButtonItem, NTKFace;

@interface _NTKCFaceDetailPhotoCropViewController : UIViewController <UIScrollViewDelegate> {
    CAShapeLayer *_reverseMask;
    NTKCCenteringScrollView *_scrollView;
    double _photoScale;
    CAShapeLayer *_mask;
    UIView *_timeContainer;
    NTKDigitalTimeLabel *_time;
    UIBarButtonItem *_deleteButton;
    UIBarButtonItem *_cancelButton;
    BOOL _cancelConfirmed;
    BOOL _deleteConfirmed;
    id /* block */ _completionHandler;
}

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *editor;
@property (retain, nonatomic) NTKFace *face;
@property (retain, nonatomic) NTKDigitalTimeLabelStyle *timeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_cancelPressed;
- (void)_donePressed;
- (void)_deletePressed;
- (void)dismissWithSaving:(BOOL)a0;
- (id)initWithIndex:(unsigned long long)a0 inPhotosEditor:(id)a1 forFace:(id)a2 timeStyle:(id)a3 completionHandler:(id /* block */)a4;

@end
