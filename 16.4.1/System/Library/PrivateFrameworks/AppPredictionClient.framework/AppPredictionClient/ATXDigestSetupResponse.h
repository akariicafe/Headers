@class NSString;

@interface ATXDigestSetupResponse : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned long long avgNumBasicNotifications;
@property (readonly, nonatomic) unsigned long long avgNumMessageNotifications;
@property (readonly, nonatomic) unsigned long long avgNumTimeSensitiveNonMessageNotifications;
@property (readonly, nonatomic) unsigned long long numBasicNotifications;
@property (readonly, nonatomic) unsigned long long numMessageNotifications;
@property (readonly, nonatomic) unsigned long long numTimeSensitiveNonMessageNotifications;

- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 avgNumBasicNotifications:(unsigned long long)a1 avgNumMessageNotifications:(unsigned long long)a2 avgNumTimeSensitiveNonMessageNotifications:(unsigned long long)a3 numBasicNotifications:(unsigned long long)a4 numMessageNotifications:(unsigned long long)a5 numTimeSensitiveNonMessageNotifications:(unsigned long long)a6;

@end
