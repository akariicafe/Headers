@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DAUserNotificationInfo : NSObject

@property (copy, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void).cxx_destruct;

@end
