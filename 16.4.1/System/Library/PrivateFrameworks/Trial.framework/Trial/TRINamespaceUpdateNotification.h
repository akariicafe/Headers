@class NSString;
@protocol TRINotificationToken;

@interface TRINamespaceUpdateNotification : NSObject <TRINamespaceUpdateProtocol>

@property (readonly, nonatomic) unsigned int namespaceId;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) id<TRINotificationToken> token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)deregisterUpdateWithToken:(id)a0;
+ (BOOL)notifyUpdateForNamespaceName:(id)a0;
+ (id)notificationNameForNamespaceName:(id)a0;
+ (id)registerUpdateForNamespaceName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;

- (id)initWithNamespaceName:(id)a0 token:(id)a1;
- (void).cxx_destruct;

@end
