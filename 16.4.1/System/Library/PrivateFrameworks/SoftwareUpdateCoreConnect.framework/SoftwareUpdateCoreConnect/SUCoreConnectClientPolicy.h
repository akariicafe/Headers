@class NSSet, NSString;
@protocol SUCoreConnectClientDelegate;

@interface SUCoreConnectClientPolicy : NSObject <SUCoreConnectPolicyProtocolPrivate, SUCoreConnectPolicyProtocol>

@property (retain, nonatomic) NSSet *proxyObjectClasses;
@property (readonly, retain, nonatomic) NSString *serviceName;
@property (readonly, weak, nonatomic) id<SUCoreConnectClientDelegate> clientDelegate;
@property (readonly, retain, nonatomic) NSString *clientID;
@property (readonly, retain, nonatomic) NSString *clientIDRaw;
@property (readonly, nonatomic) int clientProcessIdentifier;
@property (nonatomic) BOOL usesPersistentXPCConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setAllowlistedClasses:(id)a0 forKey:(id)a1;
+ (void)setAllowlistedClasses:(id)a0 forKeys:(id)a1;
+ (void)setAllowlistedClass:(Class)a0 forKey:(id)a1;
+ (id)_getSharedClientAccessQueue;
+ (id)_getAllowlistedClassesForKey:(id)a0;
+ (id)_getSharedClientAllowlistedClasses;
+ (id)getAllowlistedClassesForKey:(id)a0;
+ (void)clearAllowlistedClasses;

@end
