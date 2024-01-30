@class NSString;

@interface FTMutableQSSVersionInfo : FTQSSVersionInfo

@property (copy, nonatomic) NSString *qss_version_server;
@property (copy, nonatomic) NSString *qss_version_brane;
@property (copy, nonatomic) NSString *qss_version_serverkit;
@property (copy, nonatomic) NSString *qss_version_siritts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
