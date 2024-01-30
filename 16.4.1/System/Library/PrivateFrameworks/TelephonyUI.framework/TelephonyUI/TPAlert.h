@class NSString;

@interface TPAlert : NSObject

@property (nonatomic) struct __CFUserNotification { } *userNotification;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSString *defaultButtonTitle;
@property (readonly, nonatomic) NSString *alternateButtonTitle;
@property (readonly, nonatomic) NSString *otherButtonTitle;

- (void)show;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)defaultResponse;
- (void)alternateResponse;
- (void)otherResponse;
- (void)showOnViewController:(id)a0;

@end
