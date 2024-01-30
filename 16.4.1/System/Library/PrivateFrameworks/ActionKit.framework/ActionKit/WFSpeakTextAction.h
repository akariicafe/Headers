@class WFSpeakTextActionOperation;
@protocol WFActionExtendedOperation;

@interface WFSpeakTextAction : WFAction {
    id<WFActionExtendedOperation> _extendedOperation;
}

@property (retain, nonatomic) WFSpeakTextActionOperation *runningOperation;

- (void)cancel;
- (void).cxx_destruct;
- (id)extendedOperation;
- (void)initializeParameters;
- (BOOL)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)setExtendedOperation:(id)a0;
- (id)voicePickerParameter;

@end
