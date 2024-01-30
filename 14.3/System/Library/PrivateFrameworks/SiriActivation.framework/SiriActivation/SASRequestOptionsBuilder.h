@class SASSystemState;

@interface SASRequestOptionsBuilder : NSObject

@property (retain, nonatomic) SASSystemState *systemState;
@property (nonatomic) long long presentationIdentifier;

- (void).cxx_destruct;
- (BOOL)_siriIsEnabled;
- (id)_createRequestOptionsForRequest:(id)a0 withDataSource:(id)a1;
- (id)buildOptionsWithRequest:(id)a0 presentationIdentifier:(long long)a1 dataSource:(id)a2;

@end
