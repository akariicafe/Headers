@class NSString, NSArray;

@interface ICLaunchConfiguration : NSObject

@property (class, readonly, nonatomic) ICLaunchConfiguration *currentConfiguration;
@property (class, readonly, nonatomic) ICLaunchConfiguration *userInterfaceTesting;

@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *container;
@property (nonatomic) BOOL resetsCloud;
@property (nonatomic) BOOL resetsContainer;
@property (nonatomic) BOOL resetsState;
@property (copy, nonatomic) NSString *localAccountArchiveName;
@property (copy, nonatomic) NSString *cloudAccountArchiveName;
@property (readonly, nonatomic) NSArray *launchArguments;

+ (id)nonDefaultValueForValue:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)initWithEnvironment:(unsigned long long)a0 container:(id)a1 resetsContainer:(BOOL)a2 resetsCloud:(BOOL)a3 resetsState:(BOOL)a4 localAccountArchive:(id)a5 cloudAccountArchive:(id)a6;
- (void).cxx_destruct;

@end
