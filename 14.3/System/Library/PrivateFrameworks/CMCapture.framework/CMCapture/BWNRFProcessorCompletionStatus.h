@class NRFCompletionStatus;

@interface BWNRFProcessorCompletionStatus : NSObject {
    NRFCompletionStatus *_completionStatus;
}

- (void)dealloc;
- (id)description;
- (BOOL)waitForCompletion;
- (id)initWithCompletionStatus:(id)a0;
- (BOOL)waitForCompletionWithDescriptionOut:(id *)a0;

@end
