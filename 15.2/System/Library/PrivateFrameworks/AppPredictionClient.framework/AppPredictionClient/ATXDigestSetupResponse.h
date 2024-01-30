@class NSString;

@interface ATXDigestSetupResponse : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned long long avgNumBasicNotifications;
@property (readonly, nonatomic) unsigned long long avgNumMessageNotifications;
@property (readonly, nonatomic) unsigned long long avgNumTimeSensitiveNonMessageNotifications;

- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 avgNumBasicNotifications:(unsigned long long)a1 avgNumMessageNotifications:(unsigned long long)a2 avgNumTimeSensitiveNonMessageNotifications:(unsigned long long)a3;

@end
