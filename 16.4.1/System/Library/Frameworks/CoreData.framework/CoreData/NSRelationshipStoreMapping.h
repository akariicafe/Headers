@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}

- (id)foreignKeys;
- (id)relationship;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)joins;
- (unsigned int)joinSemantic;
- (id)destinationEntityExternalName;

@end
