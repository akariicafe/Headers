@class EFSQLGeneratorTableRelationship, NSArray, NSString;

@interface EFSQLExpressionGenerator : NSObject

@property (readonly, nonatomic) EFSQLGeneratorTableRelationship *tableRelationship;
@property (readonly, nonatomic) NSArray *whereExpression;
@property (readonly, nonatomic) NSArray *additionalSelectColumns;
@property (nonatomic) BOOL includeSourceColumn;
@property (copy, nonatomic) NSString *alias;
@property (readonly, nonatomic) EFSQLExpressionGenerator *previousExpressionGenerator;

+ (id)tableFromPreviousTable:(id)a0 propertyMapper:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)joinOnGenerator;
- (void)assignAliasWithMap:(id)a0;
- (id)columnAlias;
- (id)initWithTableRelationship:(id)a0 whereExpression:(id)a1 previousExpressionGenerator:(id)a2;
- (id)initWithTableRelationship:(id)a0 whereExpression:(id)a1 previousExpressionGenerator:(id)a2 additionalSelectColumns:(id)a3 includeSourceColumn:(BOOL)a4;
- (BOOL)isEqualToEFSQLExpressionGenerator:(id)a0;

@end
