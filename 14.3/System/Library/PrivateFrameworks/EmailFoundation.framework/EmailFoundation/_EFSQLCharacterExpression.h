@class NSString;

@interface _EFSQLCharacterExpression : NSObject <EFSQLValueExpressable>

@property (readonly, nonatomic) unsigned short character;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ef_SQLIsolatedExpression;
- (id)initWithCharacter:(unsigned short)a0;
- (void)ef_renderSQLExpressionInto:(id)a0;

@end
