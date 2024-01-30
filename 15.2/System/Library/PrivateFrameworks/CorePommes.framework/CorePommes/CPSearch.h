@class NSArray, NSString, CPSearchContext, PMQuery;
@protocol CPXPCConnection;

@interface CPSearch : NSObject <CPSearch>

@property (copy, nonatomic) PMQuery *query;
@property (retain, nonatomic) id<CPXPCConnection> connection;
@property (readonly, nonatomic) CPSearchContext *searchContext;
@property (copy) id /* block */ foundItemsHandler;
@property (copy) id /* block */ completionHandler;
@property (copy) NSArray *filterQueries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)start;
- (void).cxx_destruct;
- (id)initWithQueryString:(id)a0 connection:(id)a1;
- (id)initWithQueryString:(id)a0 context:(id)a1 connection:(id)a2;
- (id)initWithCSQueryString:(id)a0 connection:(id)a1;
- (id)initWithCSQueryString:(id)a0 context:(id)a1 connection:(id)a2;

@end
