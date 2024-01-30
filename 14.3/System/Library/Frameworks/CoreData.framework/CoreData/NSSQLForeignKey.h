@class NSString, NSSQLToOne;

@interface NSSQLForeignKey : NSSQLColumn {
    NSString *_name;
    NSSQLToOne *_toOne;
}

- (void)_setName:(id)a0;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)initWithEntity:(id)a0 toOneRelationship:(id)a1;
- (void)dealloc;
- (id)toOneRelationship;
- (id)name;
- (id)initForReadOnlyFetchingOfEntity:(id)a0 toOneRelationship:(id)a1;

@end
