@class UIResponder;

@interface _UITouchForwardingRecipient : NSObject {
    UIResponder *fromResponder;
    long long recordedPhase;
    long long autocompletedPhase;
}

@property (weak, nonatomic) UIResponder *responder;

- (void).cxx_destruct;
- (id)description;

@end
