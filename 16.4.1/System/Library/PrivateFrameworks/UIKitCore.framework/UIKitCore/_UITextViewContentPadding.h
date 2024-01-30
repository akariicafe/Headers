@protocol _UITextViewContentPaddingDelegate;

@interface _UITextViewContentPadding : NSObject

@property (weak, nonatomic) id<_UITextViewContentPaddingDelegate> delegate;
@property (nonatomic) long long mode;
@property (nonatomic) double targetValue;
@property (readonly, nonatomic) double currentValue;

- (void)resetCurrentValue;
- (void)_checkNewCurrentValue;
- (id)initWithDelegate:(id)a0;
- (void)increaseToValue:(double)a0;
- (void).cxx_destruct;

@end
