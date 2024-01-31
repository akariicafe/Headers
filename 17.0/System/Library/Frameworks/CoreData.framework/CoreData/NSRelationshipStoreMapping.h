@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}

- (id)foreignKeys;
- (id)joins;
- (void)dealloc;
- (unsigned int)joinSemantic;
- (id)relationship;
- (id)destinationEntityExternalName;
- (BOOL)isEqual:(id)a0;

@end
