@class NSString, NSSQLToOne;

@interface NSSQLForeignKey : NSSQLColumn {
    NSString *_name;
    NSSQLToOne *_toOne;
}

- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initForReadOnlyFetchingOfEntity:(id)a0 toOneRelationship:(id)a1;
- (id)name;
- (id)toOneRelationship;
- (void)dealloc;
- (id)initWithEntity:(id)a0 toOneRelationship:(id)a1;

@end
