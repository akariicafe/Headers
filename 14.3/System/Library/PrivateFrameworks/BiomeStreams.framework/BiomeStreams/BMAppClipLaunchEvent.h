@class NSString, NSURL;

@interface BMAppClipLaunchEvent : BMEventBase <BMStoreData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *URLHash;
@property (readonly, copy, nonatomic) NSString *clipBundleID;
@property (readonly, copy, nonatomic) NSString *appBundleID;
@property (readonly, copy, nonatomic) NSString *webAppBundleID;
@property (readonly, copy, nonatomic) NSString *launchReason;
@property (readonly, copy, nonatomic) NSURL *fullURL;
@property (readonly, copy, nonatomic) NSURL *referrerURL;
@property (readonly, copy, nonatomic) NSString *referrerBundleID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURLHash:(id)a0 clipBundleID:(id)a1 appBundleID:(id)a2 webAppBundleID:(id)a3 launchReason:(id)a4 fullURL:(id)a5 referrerURL:(id)a6 referrerBundleID:(id)a7;

@end
