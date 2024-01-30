@class NSSQLEntity, NSArray, NSAttributeDescription, NSString, NSObject;

@interface NSSQLLocationAttributeRTreeExtension : NSObject <NSSQLAttributeExtension> {
    NSString *_attributeName;
    NSArray *_insertSQLStrings;
    NSArray *_dropSQLStrings;
    NSArray *_bulkUpdateSQLStrings;
}

@property (readonly, nonatomic) NSObject *userInfoObject;
@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) NSAttributeDescription *attributeDescription;
@property (readonly, nonatomic) NSSQLEntity *sqlEntity;
@property (readonly, nonatomic) NSString *rtreeTableName;
@property (readonly, nonatomic) NSAttributeDescription *latProp;
@property (readonly, nonatomic) NSAttributeDescription *longProp;
@property (readonly, nonatomic) NSArray *insertSQLStrings;
@property (readonly, nonatomic) NSArray *dropSQLStrings;
@property (readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newRTReeTableNameForAttribute:(id)a0 onEntity:(id)a1;

- (BOOL)isEqualToExtension:(id)a0;
- (void)dealloc;
- (BOOL)validatePropertyWithDescription:(id)a0 andName:(id)a1 forUseAs:(id)a2 onAttributeNamed:(id)a3 onEntityNamed:(id)a4 error:(id *)a5;
- (BOOL)validate:(id *)a0;
- (id)initWithObjectFromUserInfo:(id)a0 onAttributeNamed:(id)a1 onEntity:(id)a2;
- (void)generateSQLStrings;

@end
