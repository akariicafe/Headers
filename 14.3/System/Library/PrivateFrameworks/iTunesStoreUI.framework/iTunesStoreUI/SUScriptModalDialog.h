@class ISDialog;
@protocol SUScriptModalDialogDelegate;

@interface SUScriptModalDialog : NSObject {
    ISDialog *_dialog;
}

@property (nonatomic) id<SUScriptModalDialogDelegate> delegate;

+ (id)titleForURL:(id)a0;

- (void)dealloc;
- (id)initWithDialog:(id)a0;
- (id)copyResponseByRunningModal;
- (id)_copyResponseByRunningModal;

@end
