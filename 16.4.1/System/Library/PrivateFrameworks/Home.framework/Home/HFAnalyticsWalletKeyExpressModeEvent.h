@class NSNumber;

@interface HFAnalyticsWalletKeyExpressModeEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *expressModeSelectionNumber;
@property (retain, nonatomic) NSNumber *expressModeLocationNumber;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
