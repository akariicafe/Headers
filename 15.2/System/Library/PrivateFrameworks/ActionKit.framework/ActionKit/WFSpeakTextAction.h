@class WFSpeakTextActionOperation;
@protocol WFActionExtendedOperation;

@interface WFSpeakTextAction : WFAction {
    id<WFActionExtendedOperation> _extendedOperation;
}

@property (retain, nonatomic) WFSpeakTextActionOperation *runningOperation;

- (void).cxx_destruct;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (id)extendedOperation;
- (void)setExtendedOperation:(id)a0;
- (id)voicePickerParameter;

@end
