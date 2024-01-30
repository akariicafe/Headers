@class NSArray;
@protocol FCNewsAppConfigurationManager, FCCoreConfigurationManager;

@interface NSSNewsAnalyticsSubmitEnvelopesOperation : FCOperation

@property (copy, nonatomic) NSArray *envelopes;
@property (copy, nonatomic) id /* block */ handoffCompletion;
@property (copy, nonatomic) id /* block */ submissionCompletion;
@property (retain, nonatomic) id<FCNewsAppConfigurationManager, FCCoreConfigurationManager> appConfigurationManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationDidFinishWithError:(id)a0;

@end
