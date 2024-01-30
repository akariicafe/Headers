@class NSArray, NSString;

@interface EFSQLGeneratorCompoundPredicateNode : NSObject <EFSQLGeneratorPredicateNode>

@property (readonly, nonatomic) unsigned long long predicateType;
@property (readonly, nonatomic) NSArray *childPredicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
