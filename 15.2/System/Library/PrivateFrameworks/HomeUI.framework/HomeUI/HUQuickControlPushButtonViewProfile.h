@class NSString, HFNumberValueConstraints;

@interface HUQuickControlPushButtonViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>

@property (nonatomic) BOOL toggleColorScheme;
@property (readonly, nonatomic) HFNumberValueConstraints *primaryValueConstraints;
@property (readonly, nonatomic) HFNumberValueConstraints *secondaryValueConstraints;
@property (readonly, nonatomic) BOOL hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
