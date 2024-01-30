@class NSString, NSDictionary;

@interface HDUserNotification : NSObject

@property (copy, nonatomic) id /* block */ responseHandler;
@property (nonatomic) struct __CFUserNotification { } *notification;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *defaultButton;
@property (copy, nonatomic) NSString *cancelButton;
@property (copy, nonatomic) NSString *otherButton;
@property (copy, nonatomic) NSDictionary *additionalDescriptors;
@property (nonatomic) long long alertLevel;
@property (nonatomic) unsigned long long userNotificationOptions;

- (void).cxx_destruct;
- (void)_handleResponse:(unsigned long long)a0;
- (void)presentWithResponseHandler:(id /* block */)a0;

@end
