@class NSArray, NSString;

@interface LNFetchSuggestedActionsConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 siriLanguageCode:(id)a1 completionHandler:(id /* block */)a2;

@end
