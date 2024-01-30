@interface SQMediaItemDiscovery : NSObject

+ (id)queue;
+ (void)mediaItemForID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)mediaItemsForIDs:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
