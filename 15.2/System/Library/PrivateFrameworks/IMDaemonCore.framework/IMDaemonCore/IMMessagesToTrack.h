@class NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface IMMessagesToTrack : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *recentMessageIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) unsigned long long maxNumberOfMessages;
@property (readonly, nonatomic) unsigned long long currentNumberOfMessages;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)addMessagesID:(id)a0;
- (void)containsMessageID:(id)a0 completion:(id /* block */)a1;

@end
