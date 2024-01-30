@class NSString, NSDictionary, NSArray, NSNumber, ASCAdamID;
@protocol ASCOffer;

@interface ASCAlertOffer : NSObject <ASCOffer, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *alertTitle;
@property (readonly, copy, nonatomic) NSString *alertMessage;
@property (readonly, copy, nonatomic) id<ASCOffer> alertButtonOffer;
@property (readonly, copy, nonatomic) NSString *alertButtonTitle;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSDictionary *titles;
@property (readonly, copy, nonatomic) NSDictionary *subtitles;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) NSNumber *ageRating;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)offerWithMetrics:(id)a0;
- (id)initWithID:(id)a0 titles:(id)a1 subtitles:(id)a2 flags:(long long)a3 ageRating:(id)a4 metrics:(id)a5 alertTitle:(id)a6 alertMessage:(id)a7 alertButtonOffer:(id)a8 alertButtonTitle:(id)a9;

@end
