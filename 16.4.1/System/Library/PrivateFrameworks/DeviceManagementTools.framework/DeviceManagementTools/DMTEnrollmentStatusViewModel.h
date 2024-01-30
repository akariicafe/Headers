@class NSString;

@interface DMTEnrollmentStatusViewModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, copy, nonatomic) NSString *statusMessage;

+ (id)detailTextWithOrganizationName:(id)a0 organizationType:(long long)a1 localizedDeviceClass:(id)a2;
+ (id)statusMessageForEnrollmentState:(long long)a0 networkName:(id)a1;
+ (id)titleWithLocalizedDeviceClass:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOrganizationName:(id)a0 organizationType:(long long)a1 localizedDeviceClass:(id)a2 enrollmentState:(long long)a3 networkName:(id)a4;

@end
