@class NSString, NSDate;

@interface SABundleManagerApp : NSObject

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) long long deviceType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *authorizationDate;
@property (copy, nonatomic) NSString *pairedBundleId;

- (void).cxx_destruct;
- (id)getLocalizedName;
- (void)getLocalizedNameForPairedDeviceWithCompletion:(id /* block */)a0;
- (id)initWithBundleId:(id)a0 deviceType:(long long)a1;

@end
