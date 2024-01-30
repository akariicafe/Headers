@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ASCloudKitServerChangeTokenCache : NSObject <NSCopying> {
    NSMutableDictionary *_databaseChangeTokensByDatabaseScope;
    NSMutableDictionary *_zoneChangeTokensByZoneID;
    double _timestamp;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic, getter=isExpired) BOOL expired;

+ (id)changeTokenCacheFromUserDefaultsWithSerialQueue:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serverChangeTokenForRecordZoneID:(id)a0;
- (id)initWithSerialQueue:(id)a0;
- (void)setServerChangeToken:(id)a0 forRecordZoneID:(id)a1;
- (void)persistToUserDefaults;
- (id)serverChangeTokenForDatabase:(id)a0;
- (void)setServerChangeToken:(id)a0 forDatabase:(id)a1;

@end
