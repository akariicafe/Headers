@class NSSQLEntity, NSArray, NSString, NSSQLAttribute, NSSQLRelationship;

@interface NSSQLKeypathTriggerAttributeExtension : NSObject <NSSQLAttributeExtension> {
    id _objectFromUserInfo;
    NSString *_keypath;
    NSSQLEntity *_entity;
    NSSQLAttribute *_attribute;
    NSSQLRelationship *_countedRelationship;
}

@property (readonly, nonatomic) NSArray *insertSQLStrings;
@property (readonly, nonatomic) NSArray *dropSQLStrings;
@property (readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqualToExtension:(id)a0;
- (id)initWithObjectFromUserInfo:(id)a0 onAttributeNamed:(id)a1 onEntity:(id)a2;
- (BOOL)validate:(id *)a0;
- (void)dealloc;

@end
