@class NSArray;
@protocol FCNewsAppConfigurationManager, FCCoreConfigurationManager;

@interface NSSNewsAnalyticsSubmitEnvelopesOperation : FCOperation

@property (copy, nonatomic) NSArray *envelopes;
@property (copy, nonatomic) id /* block */ handoffCompletion;
@property (copy, nonatomic) id /* block */ submissionCompletion;
@property (retain, nonatomic) id<FCNewsAppConfigurationManager, FCCoreConfigurationManager> appConfigurationManager;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationDidFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
