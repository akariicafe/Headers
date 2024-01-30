@class NSString, UIColor, NSObject;
@protocol HFIconDescriptor;

@interface HUQuickControlIconViewProfile : HUQuickControlViewProfile

@property (retain, nonatomic) NSString *statusString;
@property (retain, nonatomic) UIColor *statusTextColor;
@property (retain, nonatomic) NSString *supplementaryString;
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
