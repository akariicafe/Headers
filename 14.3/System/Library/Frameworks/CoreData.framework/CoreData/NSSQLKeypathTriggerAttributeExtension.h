@class NSSQLEntity, NSString, NSSQLAttribute, NSSQLRelationship, NSArray;

@interface NSSQLKeypathTriggerAttributeExtension : NSObject <NSSQLAttributeExtension>

@property (readonly, nonatomic) id objectFromUserInfo;
@property (readonly, nonatomic) NSString *keypath;
@property (readonly, nonatomic) NSSQLEntity *entity;
@property (readonly, nonatomic) NSSQLAttribute *attribute;
@property (readonly, nonatomic) NSSQLRelationship *countedRelationship;
@property (readonly, nonatomic) NSArray *insertSQLStrings;
@property (readonly, nonatomic) NSArray *dropSQLStrings;
@property (readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqualToExtension:(id)a0;
- (void)dealloc;
- (BOOL)validateAttribute:(id *)a0;
- (BOOL)validateKeypath:(id *)a0;
- (BOOL)validateExpression:(id)a0 error:(id *)a1;
- (BOOL)validate:(id *)a0;
- (id)initWithObjectFromUserInfo:(id)a0 onAttributeNamed:(id)a1 onEntity:(id)a2;
- (void)generateSQLStrings;

@end
