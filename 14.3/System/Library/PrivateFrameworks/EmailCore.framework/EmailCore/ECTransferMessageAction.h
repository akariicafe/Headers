@class NSArray, NSString, NSURL, NSMutableOrderedSet;

@interface ECTransferMessageAction : ECLocalMessageAction <ECTransferMessageActionBuilder> {
    NSMutableOrderedSet *_itemsToDownload;
    NSMutableOrderedSet *_itemsToCopy;
    NSMutableOrderedSet *_itemsToDelete;
}

@property (nonatomic) long long transferType;
@property (retain, nonatomic) NSURL *sourceMailboxURL;
@property (retain, nonatomic) NSURL *destinationMailboxURL;
@property (retain, nonatomic) NSArray *itemsToDownload;
@property (retain, nonatomic) NSArray *itemsToCopy;
@property (retain, nonatomic) NSArray *itemsToDelete;
@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (nonatomic) BOOL userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (void)updateWithCompletedItems:(id)a0 forPhase:(long long)a1;
- (void)updateWithFailedItems:(id)a0 forPhase:(long long)a1;

@end
