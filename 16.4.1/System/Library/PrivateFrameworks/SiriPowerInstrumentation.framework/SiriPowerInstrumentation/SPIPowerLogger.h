@interface SPIPowerLogger : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned char process;

- (id)captureSnapshot;
- (id)initWithCurrentProcess;
- (id)initWithProcessIdentifier:(int)a0;
- (id)init;

@end
