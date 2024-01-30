@class NSString;
@protocol EFSQLValueExpressable;

@interface _EFSQLAliasedExpression : NSObject <EFSQLValueExpressable>

@property (readonly, nonatomic) id<EFSQLValueExpressable> expression;
@property (readonly, copy, nonatomic) NSString *alias;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
