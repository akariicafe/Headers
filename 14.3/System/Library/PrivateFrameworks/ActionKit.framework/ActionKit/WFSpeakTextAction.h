@class WFSpeakTextActionOperation;
@protocol WFActionExtendedOperation;

@interface WFSpeakTextAction : WFAction {
    id<WFActionExtendedOperation> _extendedOperation;
}

@property (retain, nonatomic) WFSpeakTextActionOperation *runningOperation;

- (void)cancel;
- (void).cxx_destruct;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)extendedOperation;
- (void)setExtendedOperation:(id)a0;
- (id)voicePickerParameter;

@end
