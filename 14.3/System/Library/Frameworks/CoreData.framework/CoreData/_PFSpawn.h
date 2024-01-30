@interface _PFSpawn : NSObject {
    int _pid;
    int _termstatus;
}

@property (readonly) int processID;
@property (readonly) int terminationStatus;

+ (id)launchedTaskWithLaunchPath:(id)a0 arguments:(id)a1;
+ (id)launchedTaskWithLaunchPath:(id)a0 arguments:(id)a1 environment:(id)a2;
+ (id)launchedTaskWithLaunchPath:(id)a0 arguments:(id)a1 environment:(id)a2 redirect:(id)a3;

- (void)waitUntilExit;

@end
