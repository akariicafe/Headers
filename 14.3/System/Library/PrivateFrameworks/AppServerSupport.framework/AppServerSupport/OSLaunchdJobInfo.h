@class OSLaunchdJobExitStatus;

@interface OSLaunchdJobInfo : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int lastSpawnError;
@property (readonly, nonatomic) OSLaunchdJobExitStatus *lastExitStatus;

- (void).cxx_destruct;
- (id)initWithState:(long long)a0 pid:(int)a1 lastSpawnError:(int)a2 lastExitStatus:(id)a3;

@end
