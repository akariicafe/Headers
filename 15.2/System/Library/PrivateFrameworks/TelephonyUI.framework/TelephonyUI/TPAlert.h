@class NSString;

@interface TPAlert : NSObject

@property (nonatomic) struct __CFUserNotification { } *userNotification;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSString *defaultButtonTitle;
@property (readonly, nonatomic) NSString *alternateButtonTitle;
@property (readonly, nonatomic) NSString *otherButtonTitle;

- (void).cxx_destruct;
- (void)show;
- (void)dealloc;
- (void)defaultResponse;
- (void)otherResponse;
- (void)alternateResponse;
- (void)showOnViewController:(id)a0;

@end
