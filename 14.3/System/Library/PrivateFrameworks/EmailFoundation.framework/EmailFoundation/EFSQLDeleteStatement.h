@class NSString, NSMutableArray;
@protocol EFSQLValueExpressable;

@interface EFSQLDeleteStatement : NSObject {
    NSString *_table;
    id<EFSQLValueExpressable> _whereClause;
    NSMutableArray *_orderExpressions;
}

@property (nonatomic) unsigned long long limit;
@property (readonly, copy, nonatomic) NSString *queryString;

- (void).cxx_destruct;
- (void)orderBy:(id)a0 ascending:(BOOL)a1;
- (void)orderByColumn:(id)a0 ascending:(BOOL)a1;
- (id)initWithTable:(id)a0;
- (id)initWithTable:(id)a0 where:(id)a1;

@end
