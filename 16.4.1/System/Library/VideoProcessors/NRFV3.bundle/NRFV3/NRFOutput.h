@class NRFCompletionStatus;

@interface NRFOutput : NSObject

@property (retain, nonatomic) NRFCompletionStatus *completionStatus;

- (void).cxx_destruct;

@end
