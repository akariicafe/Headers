@class PSGOperationalPredictedItem, PSGProactiveTrigger, PPQuickTypeItem;

@interface PSGStructuredInfoSuggestion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PSGProactiveTrigger *proactiveTrigger;
@property (readonly, nonatomic) PPQuickTypeItem *portraitItem;
@property (readonly, nonatomic) PSGOperationalPredictedItem *operationalItem;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)predictedValue;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToItem:(id)a0;
- (BOOL)isApplePay;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProactiveTrigger:(id)a0 portraitItem:(id)a1 operationalItem:(id)a2;

@end
