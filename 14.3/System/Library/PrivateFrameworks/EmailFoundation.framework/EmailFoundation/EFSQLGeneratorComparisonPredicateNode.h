@class NSArray, NSString;
@protocol EFSQLExpressable;

@interface EFSQLGeneratorComparisonPredicateNode : NSObject <EFSQLGeneratorPredicateNode>

@property (readonly, nonatomic) NSArray *keypathGenerators;
@property (readonly, nonatomic) unsigned long long predicateOperator;
@property (readonly, nonatomic) id<EFSQLExpressable> constValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
