@class NSData, NSMutableDictionary;

@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor> {
    NSMutableDictionary *_filter;
    NSMutableDictionary *_pids;
    NSMutableDictionary *_processes;
    NSMutableDictionary *_processImagePaths;
    NSMutableDictionary *_subsystems;
    NSMutableDictionary *_categories;
}

@property (readonly, nonatomic) NSData *data;

- (id)initWithPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)addCategory:(id)a0 flags:(unsigned long long)a1;
- (unsigned long long)flagsForPredicate:(id)a0;
- (void)processComparisonPredicate:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)addProcessImagePath:(id)a0 flags:(unsigned long long)a1;
- (void)addSubsystem:(id)a0 flags:(unsigned long long)a1;
- (void)processLeftExpression:(id)a0 andRightExpression:(id)a1 flags:(unsigned long long)a2;
- (void)visitPredicateOperator:(id)a0;
- (void)addProcessID:(id)a0 flags:(unsigned long long)a1;
- (void)addProcess:(id)a0 flags:(unsigned long long)a1;
- (void).cxx_destruct;

@end
