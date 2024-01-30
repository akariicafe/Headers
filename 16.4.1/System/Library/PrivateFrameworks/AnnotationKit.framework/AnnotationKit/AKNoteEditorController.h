@class AKNoteEditorViewController, AKPopupAnnotation, NSString;
@protocol AKNoteEditorControllerDelegate;

@interface AKNoteEditorController : NSObject <AKNoteEditorViewControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (retain) AKNoteEditorViewController *contentViewController;
@property (retain, nonatomic) AKPopupAnnotation *annotation;
@property (readonly, nonatomic) NSString *editedText;
@property (weak, nonatomic) id<AKNoteEditorControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)hide;
- (void).cxx_destruct;
- (void)show:(BOOL)a0;
- (void)finishEditing;
- (id)_popupBackgroundColorForPopupAnnotation:(id)a0;
- (void)beginEditing:(BOOL)a0;
- (void)noteEditorViewControllerDidBeginEditing:(id)a0;
- (void)noteEditorViewControllerDidEndEditing:(id)a0;
- (double)suggestedEditorHeightForWidth:(double)a0;

@end
