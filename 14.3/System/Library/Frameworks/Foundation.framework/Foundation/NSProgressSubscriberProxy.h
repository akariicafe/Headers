@class NSString, NSFileAccessNode, NSXPCConnection;
@protocol NSProgressSubscriber;

@interface NSProgressSubscriberProxy : NSObject <NSProgressSubscriber> {
    id<NSProgressSubscriber> _forwarder;
    id _subscriberID;
    NSString *_bundleID;
    NSFileAccessNode *_itemLocation;
    NSXPCConnection *_connection;
}

@property (copy) NSString *category;
@property NSFileAccessNode *itemLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithForwarder:(id)a0 onConnection:(id)a1 subscriberID:(id)a2 appBundleID:(id)a3;
- (oneway void)addPublisher:(id)a0 forID:(id)a1 withValues:(id)a2 isOld:(BOOL)a3;
- (void)dealloc;
- (BOOL)isFromConnection:(id)a0;
- (oneway void)observePublisherUserInfoForID:(id)a0 value:(id)a1 forKey:(id)a2;
- (id)descriptionWithIndenting:(id)a0;
- (oneway void)observePublisherForID:(id)a0 values:(id)a1 forKeys:(id)a2;
- (oneway void)removePublisherForID:(id)a0;
- (id)appBundleID;

@end
