@class NSSet, NSDateComponents, NSString;

@interface DDSAssetPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDateComponents *idleUsageEvictionPeriod;
@property (nonatomic) long long preferredDownloadFrequency;
@property (nonatomic) BOOL downloadOverCellular;
@property (nonatomic) BOOL downloadWithoutPower;
@property (copy, nonatomic) NSSet *notificationDownloadTriggers;
@property (copy, nonatomic) NSString *downloadCompletionNotification;

+ (id)assetPolicy;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToAssetPolicy:(id)a0;
- (id)stringForAssetDownloadFrequency:(long long)a0;

@end
