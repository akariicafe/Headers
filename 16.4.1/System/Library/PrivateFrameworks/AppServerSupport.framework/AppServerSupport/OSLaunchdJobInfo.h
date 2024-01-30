@class NSObject, NSUUID, OSLaunchdJobExitStatus;
@protocol OS_xpc_object;

@interface OSLaunchdJobInfo : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int lastSpawnError;
@property (readonly, nonatomic) OSLaunchdJobExitStatus *lastExitStatus;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *additionalPropertiesDictionary;
@property (readonly, nonatomic) BOOL removing;
@property (readonly, nonatomic) NSUUID *instance;

- (id)initWithState:(long long)a0 pid:(int)a1 lastSpawnError:(int)a2 lastExitStatus:(id)a3 additionalPropertiesDict:(id)a4 removing:(BOOL)a5 instance:(id)a6;
- (id)description;
- (void).cxx_destruct;

@end
