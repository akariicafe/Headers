@class NSArray;
@protocol MFCorecipientsIndicatorAtomDelegate;

@interface MFCorecipientsIndicatorAtom : MFModernAtomView {
    BOOL _touchesWereCancelled;
}

@property (weak, nonatomic) id<MFCorecipientsIndicatorAtomDelegate> delegate;
@property (retain, nonatomic) NSArray *recipients;

- (id)init;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithRecipients:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
