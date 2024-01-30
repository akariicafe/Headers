@class NSString, CLLocation, CLRegion;

@interface CPSLocationConfirmationRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long requestState;
@property (readonly, nonatomic) CLLocation *deviceLocation;
@property (readonly, nonatomic) CLRegion *expectedRegion;
@property (readonly, nonatomic) NSString *clipBundleID;
@property (readonly, nonatomic) NSString *applicationName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestState:(long long)a0 clipBundleID:(id)a1 applicationName:(id)a2 deviceLocation:(id)a3 expectedRegion:(id)a4;

@end
