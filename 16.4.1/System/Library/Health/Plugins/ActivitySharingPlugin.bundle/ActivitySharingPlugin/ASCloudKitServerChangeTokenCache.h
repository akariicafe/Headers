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

- (id)serverChangeTokenForDatabase:(id)a0;
- (void)setServerChangeToken:(id)a0 forDatabase:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerialQueue:(id)a0;
- (id)serverChangeTokenForRecordZoneID:(id)a0;
- (void)persistToUserDefaults;
- (void).cxx_destruct;
- (void)setServerChangeToken:(id)a0 forRecordZoneID:(id)a1;

@end
