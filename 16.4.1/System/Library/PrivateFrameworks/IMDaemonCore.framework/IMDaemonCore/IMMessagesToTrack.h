@class NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface IMMessagesToTrack : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *recentMessageIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) unsigned long long maxNumberOfMessages;
@property (readonly, nonatomic) unsigned long long currentNumberOfMessages;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addMessagesID:(id)a0;
- (void)containsMessageID:(id)a0 completion:(id /* block */)a1;

@end
