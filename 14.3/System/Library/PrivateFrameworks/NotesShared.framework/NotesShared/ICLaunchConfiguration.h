@class NSString, NSArray;

@interface ICLaunchConfiguration : NSObject

@property (copy, nonatomic) NSString *cloudAccountContentPath;
@property (copy, nonatomic) NSString *container;
@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *localAccountArchiveName;
@property (nonatomic) BOOL resetCloud;
@property (nonatomic) BOOL resetContainer;
@property (nonatomic) BOOL resetState;
@property (readonly, nonatomic) NSArray *launchArguments;

+ (id)current;

- (void).cxx_destruct;
- (id)initWithEnvironment:(unsigned long long)a0 container:(id)a1 resetContainer:(BOOL)a2 resetCloud:(BOOL)a3 resetState:(BOOL)a4 localAccountArchiveName:(id)a5 cloudAccountContentPath:(id)a6;
- (id)initWithEnvironment:(unsigned long long)a0 container:(id)a1;
- (id)initWithDictionary:(id)a0;

@end
