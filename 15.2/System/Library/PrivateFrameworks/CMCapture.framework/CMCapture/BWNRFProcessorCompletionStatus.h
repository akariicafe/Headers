@class NRFCompletionStatus;

@interface BWNRFProcessorCompletionStatus : NSObject {
    NRFCompletionStatus *_completionStatus;
}

- (BOOL)waitForCompletion;
- (id)description;
- (void)dealloc;
- (id)initWithCompletionStatus:(id)a0;
- (BOOL)waitForCompletionWithDescriptionOut:(id *)a0;

@end
