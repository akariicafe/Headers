@class MCMLibraryRepairForUser, NSString, NSURL, MCMPOSIXUser, MCMContainerPath;

@interface MCMContainerSchemaContext : NSObject

@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSURL *homeDirectoryURL;
@property (readonly, nonatomic) MCMContainerPath *containerPath;
@property (readonly, nonatomic) unsigned short posixMode;
@property (readonly, nonatomic) MCMPOSIXUser *posixOwner;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) MCMLibraryRepairForUser *libraryRepair;
@property (readonly, nonatomic) NSString *identifier;

+ (id)contextWithHomeDirectoryURL:(id)a0 containerPath:(id)a1 POSIXMode:(unsigned short)a2 POSIXOwner:(id)a3 containerClass:(unsigned long long)a4 dataProtectionClass:(int)a5 libraryRepair:(id)a6 identifier:(id)a7;

- (void).cxx_destruct;
- (id)initWithHomeDirectoryURL:(id)a0 containerPath:(id)a1 POSIXMode:(unsigned short)a2 POSIXOwner:(id)a3 containerClass:(unsigned long long)a4 dataProtectionClass:(int)a5 libraryRepair:(id)a6 identifier:(id)a7;

@end
