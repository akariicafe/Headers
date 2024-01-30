@class NSString, NSMutableDictionary;

@interface DALocalDBWatcherDBInfo : NSObject

@property (readonly, nonatomic) NSString *path;
@property (nonatomic) int lastSavedSequenceNumber;
@property (retain, nonatomic) NSMutableDictionary *blocksByConcernedParty;

- (id)initWithPath:(id)a0;
- (id)allBlocks;
- (void)removeBlockForConcernedParty:(id)a0 account:(id)a1;
- (id)allConcernedParties;
- (void)addBlock:(id /* block */)a0 forConcernedParty:(id)a1 account:(id)a2;
- (void).cxx_destruct;

@end
