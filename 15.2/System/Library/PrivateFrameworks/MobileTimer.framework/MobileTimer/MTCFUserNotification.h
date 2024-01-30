@class NSString, MTOSTransaction;

@interface MTCFUserNotification : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) MTOSTransaction *transaction;
@property (nonatomic) struct __CFUserNotification { } *notification;

- (void).cxx_destruct;

@end
