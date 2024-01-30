@class NSArray, VSRecognitionAction;
@protocol VSRecognitionResultHandler;

@interface VSRecognitionResultHandlingRequest : NSObject {
    id<VSRecognitionResultHandler> _handler;
    NSArray *_results;
    VSRecognitionAction *_action;
}

- (id)results;
- (id)nextAction;
- (id)handler;
- (void)dealloc;
- (id)initWithHandler:(id)a0 results:(id)a1;
- (void)setNextAction:(id)a0;

@end
