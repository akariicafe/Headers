@interface PPXPCServer : NSObject

+ (void)registerXPCListeners;
+ (void)_registerLocationReadWriteListener;
+ (void)_registerStringDonationListener;
+ (void)_registerTemporalClusterListener;
+ (void)_registerInternalListener;
+ (void)_registerConnectionsListener;
+ (void)_registerNamedEntityReadOnlyListener;
+ (void)_registerConfigListener;
+ (void)_registerContactListener;
+ (void)_registerEventListener;
+ (void)_registerQuickTypeListener;
+ (void)_registerSocialHighlightListener;
+ (void)_registerLocationReadOnlyListener;
+ (void)_registerNamedEntityReadWriteListener;
+ (void)_registerTopicReadOnlyListener;
+ (void)_registerTopicReadWriteListener;

@end
