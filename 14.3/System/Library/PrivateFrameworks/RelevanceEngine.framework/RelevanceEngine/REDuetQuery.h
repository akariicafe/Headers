@class _DKQuery;

@interface REDuetQuery : NSObject

@property (copy, nonatomic) id /* block */ transformBlock;
@property (retain, nonatomic) _DKQuery *query;
@property (nonatomic) long long offset;

- (void).cxx_destruct;

@end
