@class PSGOperationalPredictedItem, PSGProactiveTrigger, PPQuickTypeItem;

@interface PSGStructuredInfoSuggestion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PSGProactiveTrigger *proactiveTrigger;
@property (readonly, nonatomic) PPQuickTypeItem *portraitItem;
@property (readonly, nonatomic) PSGOperationalPredictedItem *operationalItem;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)predictedValue;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isApplePay;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithProactiveTrigger:(id)a0 portraitItem:(id)a1 operationalItem:(id)a2;

@end
