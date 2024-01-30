@class NSString, NSDictionary, ACAccount, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface AMSPushPayload : NSObject {
    ACAccount *_account;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSNumber *accountIdentifier;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) long long alertType;
@property (readonly, nonatomic) NSDictionary *aps;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *logKey;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) NSString *URLString;

+ (id)actionTypeFromPayload:(id)a0;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;

@end
