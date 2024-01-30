@interface MessageServiceSessionBreadcrumbHandler : NSObject

+ (id)storeBreadcrumbAndSetConsumedPayloadsForNewMessageItemIfNecessary:(id)a0 inChatWithIdentifier:(id)a1;
+ (id)_messageItemToConsumeForNewBreadcrumbMessage:(id)a0 outBreadcrumbItems:(id *)a1;
+ (void)_updateStoredBreadcrumbIfNeeded:(id)a0 onChat:(id)a1;
+ (void)handleBreadcrumbForNewMessageItemIfNecessary:(id)a0 withContext:(id)a1;

- (BOOL)__im_ff_chatCacheEnabled;

@end
