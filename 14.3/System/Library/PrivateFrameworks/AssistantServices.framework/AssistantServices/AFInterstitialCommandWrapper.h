@class AceObject;
@protocol SAAceCommand;

@interface AFInterstitialCommandWrapper : NSObject {
    id /* block */ _completion;
}

@property (readonly, nonatomic) AceObject<SAAceCommand> *command;
@property (readonly, nonatomic) AceObject<SAAceCommand> *defaultReply;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dispatchCompletionWithReply:(id)a0 error:(id)a1;
- (id)initWithCommand:(id)a0 defaultReply:(id)a1 completion:(id /* block */)a2;

@end
