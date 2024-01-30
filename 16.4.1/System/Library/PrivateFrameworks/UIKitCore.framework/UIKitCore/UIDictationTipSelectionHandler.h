@class NSString;
@protocol UIDictationTipHandlerDelegate;

@interface UIDictationTipSelectionHandler : NSObject

@property (retain, nonatomic) NSString *selectionText;
@property (weak, nonatomic) id<UIDictationTipHandlerDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)signalSelectedText:(id)a0;
- (void)finalizeSelectionTip;
- (void).cxx_destruct;

@end
