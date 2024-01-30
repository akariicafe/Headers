@class NSString, NSSet, NSObject;
@protocol OS_dispatch_queue, SUCoreConnectServerDelegate;

@interface SUCoreConnectServerPolicy : NSObject <SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol>

@property (readonly, retain, nonatomic) NSString *serviceName;
@property (readonly, retain, nonatomic) NSSet *entitlements;
@property (readonly, weak, nonatomic) id<SUCoreConnectServerDelegate> serverDelegate;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getWhitelistedClassesForKey:(id)a0;
+ (void)setWhitelistedClasses:(id)a0 forKey:(id)a1;
+ (id)getWhitelistedClassesForKey:(id)a0;
+ (void)setWhitelistedClass:(Class)a0 forKey:(id)a1;
+ (void)clearWhitelistedClasses;
+ (id)_getSharedServerAccessQueue;
+ (id)_getSharedServerWhitelistedClasses;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 entitlements:(id)a1 serverDelegate:(id)a2;

@end
