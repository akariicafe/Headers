@class NSString;

@interface TPSSubscriptionLabel : NSObject

@property (readonly, nonatomic) NSString *localizedBadgeLabel;
@property (readonly, nonatomic) NSString *localizedLongLabel;
@property (readonly, nonatomic) NSString *unlocalizedLongLabel;

+ (id)labelsFromUnlocalizedLabels:(id)a0 localizedLongLabels:(id)a1 localizedBadgeLabels:(id)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUnlocalizedLabel:(id)a0 localizedLongLabel:(id)a1 localizedBadgeLabel:(id)a2;
- (BOOL)isEqualToSubscriptionLabel:(id)a0;

@end
