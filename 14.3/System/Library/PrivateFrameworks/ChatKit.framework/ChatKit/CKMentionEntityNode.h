@class NSString, NSMutableSet, NSMutableDictionary;

@interface CKMentionEntityNode : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableSet *entities;
@property (retain, nonatomic) NSMutableSet *possibleEntities;
@property (retain, nonatomic) NSMutableDictionary *children;

- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (void)addEntity:(id)a0;
- (void)addPossibleEntity:(id)a0;

@end
