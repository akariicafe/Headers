@interface _TRUserNotification : NSObject

@property (readonly, nonatomic) struct __CFUserNotification { } *CFUserNotification;
@property (readonly, nonatomic) int response;
@property (readonly, nonatomic) unsigned long long responseFlags;
@property (readonly, nonatomic) BOOL didAccept;

+ (id)userNotificationDictionaryWithTitle:(id)a0 message:(id)a1 defaultButtonTitle:(id)a2 alternateButtonTitle:(id)a3;
+ (id)userNotificationDictionaryWithTitle:(id)a0 message:(id)a1 defaultButtonTitle:(id)a2 alternateButtonTitle:(id)a3 isTopMost:(BOOL)a4 dismissOnUnlock:(BOOL)a5;

- (void)show;
- (void)cancel;
- (void)dealloc;
- (id)initWithDictionary:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (id)textFieldValueAtIndex:(unsigned long long)a0;

@end
