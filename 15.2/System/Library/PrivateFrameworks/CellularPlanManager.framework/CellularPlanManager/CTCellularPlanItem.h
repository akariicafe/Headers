@class NSUUID, NSString, CTUserLabel, CTCellularPlan, NSNumber;

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding> {
    NSString *_name;
    NSString *_iccid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *isSelectedOverride;
@property (nonatomic) long long type;
@property (nonatomic) long long lockState;
@property (nonatomic) BOOL shouldDisplayType;
@property (nonatomic) BOOL shouldAutoSelectWhenInRange;
@property (nonatomic) BOOL isSimStateValid;
@property (nonatomic) BOOL isSelectable;
@property (nonatomic) BOOL shouldAppearDisabled;
@property (nonatomic) BOOL shouldDisplay;
@property (nonatomic) BOOL isActiveDataPlan;
@property (nonatomic) BOOL isDefaultVoice;
@property (nonatomic) BOOL shouldDisplayExtendedConsentInfo;
@property (nonatomic) BOOL isLocalTransferToeSIMSupported;
@property (nonatomic) BOOL isTransferred;
@property (copy, nonatomic) NSUUID *companionSlotUuid;
@property (copy, nonatomic) NSString *companionSimLabelId;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CTUserLabel *userLabel;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CTCellularPlan *plan;
@property (readonly, nonatomic) BOOL isBackedByCellularPlan;
@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) BOOL isInstalling;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *iccid;
@property (readonly, nonatomic) NSString *carrierName;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)typeAsString:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)customDescription;
- (id)redactedDescription;
- (id)initWithCellularPlan:(id)a0 uuid:(id)a1 iccid:(id)a2 name:(id)a3 type:(long long)a4 phoneNumber:(id)a5 label:(id)a6 isLocalTransferToeSIMSupported:(BOOL)a7 isTransferred:(BOOL)a8;
- (id)initWithCellularPlan:(id)a0 uuid:(id)a1 iccid:(id)a2 name:(id)a3 type:(long long)a4 phoneNumber:(id)a5 label:(id)a6;
- (id)initWithCellularPlan:(id)a0 uuid:(id)a1;
- (id)initWithCellularPlan:(id)a0 uuid:(id)a1 type:(long long)a2 phoneNumber:(id)a3 label:(id)a4;
- (id)initWithIccid:(id)a0 uuid:(id)a1 name:(id)a2 phoneNumber:(id)a3 label:(id)a4;
- (id)initWithIccid:(id)a0 uuid:(id)a1 name:(id)a2 phoneNumber:(id)a3 label:(id)a4 isLocalTransferToeSIMSupported:(BOOL)a5;
- (id)initWithIccid:(id)a0 uuid:(id)a1 name:(id)a2 phoneNumber:(id)a3 label:(id)a4 isLocalTransferToeSIMSupported:(BOOL)a5 isTransferred:(BOOL)a6;

@end
