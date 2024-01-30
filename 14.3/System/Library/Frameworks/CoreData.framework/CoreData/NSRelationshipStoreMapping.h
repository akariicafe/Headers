@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}

- (id)foreignKeys;
- (void)dealloc;
- (id)relationship;
- (void)setForeignKeys:(id)a0;
- (void)setJoinSemantic:(unsigned int)a0;
- (id)columnDefinitions;
- (unsigned int)joinSemantic;
- (BOOL)isEqual:(id)a0;
- (id)destinationEntityExternalName;
- (id)joins;
- (void)setDestinationEntityExternalName:(id)a0;
- (id)constraintDefinitions;
- (void)setJoins:(id)a0;

@end
