@class NSSQLEntity, NSArray, NSString, NSAttributeDescription, NSObject;

@interface NSSQLLocationAttributeRTreeExtension : NSObject <NSSQLAttributeExtension> {
    NSObject *_userInfoObject;
    NSArray *_components;
    NSSQLEntity *_sqlEntity;
    NSString *_attributeName;
    NSString *_rtreeTableName;
    NSAttributeDescription *_attributeDescription;
    NSAttributeDescription *_latProp;
    NSAttributeDescription *_longProp;
    NSArray *_insertSQLStrings;
    NSArray *_dropSQLStrings;
    NSArray *_bulkUpdateSQLStrings;
}

@property (readonly, nonatomic) NSArray *insertSQLStrings;
@property (readonly, nonatomic) NSArray *dropSQLStrings;
@property (readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
