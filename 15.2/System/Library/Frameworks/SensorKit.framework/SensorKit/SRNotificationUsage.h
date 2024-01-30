@class NSString;

@interface SRNotificationUsage : NSObject <SRSampleExporting, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *bundleIdentifier;
@property long long event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notificationUsageWithBundleIdentifier:(id)a0 eventType:(long long)a1;

- (id)sr_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
