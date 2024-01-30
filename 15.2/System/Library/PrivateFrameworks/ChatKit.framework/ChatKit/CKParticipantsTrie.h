@class NSString, NSMutableArray;

@interface CKParticipantsTrie : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *entities;
@property (retain, nonatomic) NSMutableArray *children;

- (BOOL)hasPrefix:(id)a0;
- (id)initWithKey:(id)a0;
- (id)_lastNodeForString:(id)a0;
- (id)_composedCharactersForString:(id)a0 appendRootKey:(BOOL)a1;
- (void)_addEntity:(id)a0 named:(id)a1 forCharacters:(id)a2;
- (void)loadHandleEntityFromLastNode:(id)a0 intoResult:(id)a1;
- (void)addParticipantName:(id)a0 entity:(id)a1;
- (id)rawHandlesForParticipantName:(id)a0;
- (id)entitiesForPrefix:(id)a0;
- (BOOL)_trieContainsEntity:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
