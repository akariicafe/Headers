@class NSString, NSDate;

@interface CRKSystemInfo : NSObject

@property (class, readonly, nonatomic) CRKSystemInfo *sharedSystemInfo;

@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) unsigned long long platform;
@property (readonly, copy, nonatomic) NSDate *bootDate;
@property (readonly, nonatomic, getter=isEphemeralMultiUser) BOOL ephemeralMultiUser;
@property (readonly, nonatomic) BOOL cloudConfigEnablesEphemeralMultiUser;

- (void).cxx_destruct;
- (void)populateVersions;

@end
