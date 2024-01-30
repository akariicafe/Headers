@interface TPAlert : NSObject

@property (nonatomic) struct __CFUserNotification { } *userNotification;
@property (copy, nonatomic) id /* block */ completion;

- (id)defaultButtonTitle;
- (void)show;
- (void).cxx_destruct;
- (void)dealloc;
- (id)alternateButtonTitle;
- (id)message;
- (id)title;
- (id)otherButtonTitle;
- (void)defaultResponse;
- (void)otherResponse;
- (void)alternateResponse;
- (void)showOnViewController:(id)a0;

@end
