@class NSString, SNTwoPassConfiguration;

@interface SNCustomTwoPassRequest : NSObject <SNTwoPassRequest, SNAnalysisPassStrategyProviding> {
    id /* block */ _createSecondPassControllerFunction;
}

@property (readonly) SNTwoPassConfiguration *twoPassConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long analysisPassStrategy;

- (void).cxx_destruct;
- (id)createSecondPassController;
- (id)initWithTwoPassConfiguration:(id)a0 createSecondPassControllerFunction:(id /* block */)a1;

@end
