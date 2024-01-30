@class NSNumber;

@interface HFAnalyticsWalletKeyExpressModeEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *expressModeSelectionNumber;
@property (retain, nonatomic) NSNumber *expressModeLocationNumber;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
