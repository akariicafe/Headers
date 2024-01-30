@class NSURLRequest, NSString, NSMutableDictionary, NSURL, NSObject, AMSMetricsEvent;
@protocol OS_dispatch_queue;

@interface AMSFollowUpAction : NSObject {
    NSMutableDictionary *_userInfo;
}

@property (retain, nonatomic) NSString *backingIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *logKey;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (retain, nonatomic) NSString *parentIdentifier;
@property (retain, nonatomic) NSString *preferredClient;
@property (retain, nonatomic) NSURLRequest *request;
@property (nonatomic) BOOL requiresFollowUpUI;
@property (nonatomic) BOOL shouldClear;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

- (id)initWithLabel:(id)a0;
- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 parentIdentifier:(id)a1;
- (void)_setUserInfoProperty:(id)a0 forKey:(id)a1;
- (id)generateAction;
- (id)initWithAction:(id)a0 parentIdentifier:(id)a1;
- (id)initWithItem:(id)a0 action:(id)a1;
- (id)performActionsWithBag:(id)a0 account:(id)a1;
- (id)performActionsWithContract:(id)a0 account:(id)a1;
- (id)postMetricsWithBag:(id)a0;
- (id)postMetricsWithBagContract:(id)a0;

@end
