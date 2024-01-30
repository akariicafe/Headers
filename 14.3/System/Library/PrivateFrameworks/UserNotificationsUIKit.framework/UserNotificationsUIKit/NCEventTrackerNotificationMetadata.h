@class NSString, NSDate;

@interface NCEventTrackerNotificationMetadata : NSObject <NSCopying>

@property (readonly, copy) NSString *notificationIdentifier;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSDate *date;

+ (id)metadataForNotificationRequest:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithNotificationIdentifier:(id)a0 bundleIdentifier:(id)a1 date:(id)a2;

@end
