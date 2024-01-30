@class NSString, LNQueryOutput;

@interface LNPerformSuggestedResultsQueryOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) NSString *entityType;
@property (copy, nonatomic) NSString *entityMangledTypeName;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) LNQueryOutput *output;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 entityMangledTypeName:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithConnectionInterface:(id)a0 entityType:(id)a1 completionHandler:(id /* block */)a2;

@end
