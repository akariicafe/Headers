@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFActionableNotificationManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *handlersForIdentifiers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *handlersQueue;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)addNotificationRequestWithContentBody:(id)a0 actions:(id)a1 identifier:(id)a2 completion:(id /* block */)a3;
- (void)handleNotificationResponse:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
