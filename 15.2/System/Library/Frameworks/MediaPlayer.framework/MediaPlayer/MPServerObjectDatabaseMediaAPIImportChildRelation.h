@class NSString, MPIdentifierSet;

@interface MPServerObjectDatabaseMediaAPIImportChildRelation : NSObject

@property (copy, nonatomic) MPIdentifierSet *identifiers;
@property (copy, nonatomic) MPIdentifierSet *parentIdentifiers;
@property (nonatomic) NSString *childKey;
@property (nonatomic) long long relativeOrder;

- (void).cxx_destruct;
- (id)initWithItemIdentifiers:(id)a0 parentIdentifiers:(id)a1 childKey:(id)a2 relativeOrder:(long long)a3;

@end
