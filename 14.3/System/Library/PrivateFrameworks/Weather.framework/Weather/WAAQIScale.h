@class WAAQIGradient, NSMutableArray;

@interface WAAQIScale : NSObject

@property (copy, nonatomic) NSMutableArray *categories;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) WAAQIGradient *gradient;

+ (id)scaleFromScaleIdentifier:(id)a0 fallbackCountryCode:(id)a1;
+ (id)scaleForUnitedStates;
+ (id)scaleFromFoundationScale:(id)a0;
+ (id)scaleForUnitedKingdom;
+ (id)scaleForChina;
+ (id)scaleForHongKong;
+ (id)scaleForEurope;
+ (id)scaleForIndia;
+ (id)scaleForMexico;

- (void).cxx_destruct;
- (void)addCategory:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
