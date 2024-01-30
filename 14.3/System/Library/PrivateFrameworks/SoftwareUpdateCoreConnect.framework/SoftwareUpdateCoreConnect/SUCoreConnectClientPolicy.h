@class NSString;
@protocol SUCoreConnectClientDelegate;

@interface SUCoreConnectClientPolicy : NSObject <SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol>

@property (readonly, retain, nonatomic) NSString *serviceName;
@property (readonly, weak, nonatomic) id<SUCoreConnectClientDelegate> clientDelegate;
@property (readonly, retain, nonatomic) NSString *clientID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getSharedClientAccessQueue;
+ (id)_getSharedClientWhitelistedClasses;
+ (id)_getWhitelistedClassesForKey:(id)a0;
+ (void)setWhitelistedClasses:(id)a0 forKey:(id)a1;
+ (id)getWhitelistedClassesForKey:(id)a0;
+ (void)setWhitelistedClass:(Class)a0 forKey:(id)a1;
+ (void)clearWhitelistedClasses;

- (void).cxx_destruct;
- (id)initForServiceName:(id)a0 delegate:(id)a1 clientID:(id)a2;
- (id)initForServiceName:(id)a0 delegate:(id)a1;

@end
