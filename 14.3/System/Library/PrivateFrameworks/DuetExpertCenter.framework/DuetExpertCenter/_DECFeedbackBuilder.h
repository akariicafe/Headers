@class NSObject;
@protocol OS_dispatch_queue;

@interface _DECFeedbackBuilder : NSObject {
    id /* block */ _feedbackHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)initWithFeedbackHandler:(id /* block */)a0;
- (void)receiveFeedback:(id)a0 result:(id)a1 metadata:(id)a2 engaged:(BOOL)a3;

@end
