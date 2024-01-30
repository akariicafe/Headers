@class CTCarrierSpaceAppsInfo, CTCarrierSpaceUsageInfo, CTCarrierSpacePlansInfo;

@interface CTCarrierSpaceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTCarrierSpaceUsageInfo *usageInfo;
@property (retain, nonatomic) CTCarrierSpacePlansInfo *plansInfo;
@property (retain, nonatomic) CTCarrierSpaceAppsInfo *appsInfo;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
