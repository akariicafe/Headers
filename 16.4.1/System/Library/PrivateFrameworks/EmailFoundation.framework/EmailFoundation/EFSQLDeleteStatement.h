@class NSString, NSMutableArray;
@protocol EFSQLValueExpressable;

@interface EFSQLDeleteStatement : NSObject {
    NSString *_table;
    id<EFSQLValueExpressable> _whereClause;
    NSMutableArray *_orderExpressions;
}

@property (nonatomic) unsigned long long limit;
@property (readonly, copy, nonatomic) NSString *queryString;

- (void)orderByColumn:(id)a0 ascending:(BOOL)a1;
- (void)orderBy:(id)a0 ascending:(BOOL)a1;
- (id)initWithTable:(id)a0;
- (void).cxx_destruct;
- (id)initWithTable:(id)a0 where:(id)a1;

@end
