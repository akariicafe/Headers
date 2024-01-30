@class UIDelayedAction, NSMutableString, NSString;
@protocol UIDictationTipHandlerDelegate;

@interface UIDictationTipInsertionHandler : NSObject <UIDictationTipRecordingProtocol>

@property (retain, nonatomic) NSMutableString *insertionText;
@property (retain, nonatomic) UIDelayedAction *finalizeAction;
@property (nonatomic) long long textRecorderStatus;
@property (weak, nonatomic) id<UIDictationTipHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetHandler;
- (void)startRecodingText:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)finalizeRecordedText;
- (void).cxx_destruct;
- (void)recordDictationTipText:(id)a0;

@end
