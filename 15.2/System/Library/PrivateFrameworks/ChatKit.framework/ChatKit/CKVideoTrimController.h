@class CKMediaObject, CKUIVideoEditorController, NSString;
@protocol CKTrimControllerDelegate;

@interface CKVideoTrimController : NSObject <UIVideoEditorControllerDelegatePrivate, UINavigationControllerDelegate>

@property (weak, nonatomic) id<CKTrimControllerDelegate> delegate;
@property (retain, nonatomic) CKMediaObject *originalMediaObject;
@property (retain, nonatomic) CKMediaObject *trimmedMediaObject;
@property (retain, nonatomic) CKUIVideoEditorController *editVideoVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoEditorController:(id)a0 didSaveEditedVideoToPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithMediaObject:(id)a0 maxTrimDuration:(double)a1;
- (void)dealloc;
- (void)videoEditorControllerDidCancel:(id)a0;
- (void)videoEditorController:(id)a0 didFailWithError:(id)a1;
- (void)videoEditorController:(id)a0 didTrimVideoWithOptions:(id)a1;

@end
