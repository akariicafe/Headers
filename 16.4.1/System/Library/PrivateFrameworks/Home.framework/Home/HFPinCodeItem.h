@class HMUser, NSString, NSArray, HMAccessCodeUserInformation, HMHome;

@interface HFPinCodeItem : HFItem <NSCopying>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMAccessCodeUserInformation *userLabel;
@property (copy, nonatomic) id /* block */ isEnabledOnAccessory;
@property (nonatomic) BOOL hasRestrictions;
@property (nonatomic) BOOL isGuest;
@property (copy, nonatomic) NSString *pinCodeValue;
@property (retain, nonatomic) NSArray *accessories;
@property (readonly, nonatomic) HMUser *user;

+ (id)na_identity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_userLabel;
- (id)_userHandle;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithPinCode:(id)a0 inHome:(id)a1 onAccessory:(id)a2;
- (void)updateFromPinCode:(id)a0;

@end
