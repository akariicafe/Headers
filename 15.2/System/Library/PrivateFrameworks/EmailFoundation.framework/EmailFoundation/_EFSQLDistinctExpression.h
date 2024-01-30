@class NSString;
@protocol EFSQLExpressable;

@interface _EFSQLDistinctExpression : NSObject <EFSQLValueExpressable>

@property (readonly, nonatomic) id<EFSQLExpressable> expression;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
