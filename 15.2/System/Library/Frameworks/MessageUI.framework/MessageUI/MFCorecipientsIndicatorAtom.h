@class NSArray;
@protocol MFCorecipientsIndicatorAtomDelegate;

@interface MFCorecipientsIndicatorAtom : MFModernAtomView {
    BOOL _touchesWereCancelled;
}

@property (weak, nonatomic) id<MFCorecipientsIndicatorAtomDelegate> delegate;
@property (retain, nonatomic) NSArray *recipients;

- (id)initWithRecipients:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
