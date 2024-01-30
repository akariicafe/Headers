@interface PPXPCServer : NSObject

+ (void)registerXPCListeners;
+ (void)_registerNamedEntityReadOnlyListener;
+ (void)_registerNamedEntityReadWriteListener;
+ (void)_registerTopicReadOnlyListener;
+ (void)_registerTopicReadWriteListener;
+ (void)_registerLocationReadOnlyListener;
+ (void)_registerLocationReadWriteListener;
+ (void)_registerQuickTypeListener;
+ (void)_registerContactListener;
+ (void)_registerEventListener;
+ (void)_registerConnectionsListener;
+ (void)_registerConfigListener;
+ (void)_registerInternalListener;
+ (void)_registerStringDonationListener;

@end
