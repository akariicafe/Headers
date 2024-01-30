@class MSVSystemDialogOptions, NSMutableArray;

@interface MSVSystemDialog : NSObject {
    struct __CFUserNotification { } *_preparedUserNotification;
    struct __CFUserNotification { } *_presentedUserNotification;
    struct __CFRunLoopSource { } *_activeRunLoopSource;
    id /* block */ _pendingCompletion;
}

@property (nonatomic) struct __CFUserNotification { } *presentedUserNotification;
@property (nonatomic) struct __CFRunLoopSource { } *activeRunLoopSource;
@property (copy, nonatomic) id /* block */ pendingCompletion;
@property (readonly, nonatomic) MSVSystemDialogOptions *options;
@property (readonly, nonatomic) NSMutableArray *textFields;

+ (id)systemDialogWithOptions:(id)a0;

- (void)dismiss;
- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)addTextField:(id)a0;
- (void)presentWithCompletion:(id /* block */)a0;
- (void)clearTextFields;
- (void)addTextFieldWithTitle:(id)a0 secure:(BOOL)a1;
- (id)initWithCFUserNotification:(struct __CFUserNotification { } *)a0;

@end
