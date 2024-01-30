@class FBSSystemService;

@interface BKSSystemService : NSObject {
    FBSSystemService *_fbsSystemService;
}

- (unsigned int)createClientPort;
- (void)openURL:(id)a0 application:(id)a1 options:(id)a2 clientPort:(unsigned int)a3 withResult:(id /* block */)a4;
- (BOOL)canOpenApplication:(id)a0 reason:(int *)a1;
- (int)pidForApplication:(id)a0;
- (void)terminateApplication:(id)a0 forReason:(int)a1 andReport:(BOOL)a2 withDescription:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)openApplication:(id)a0 options:(id)a1 withResult:(id /* block */)a2;
- (id)systemApplicationBundleIdentifier;
- (void)cleanupClientPort:(unsigned int)a0;
- (void)openApplication:(id)a0 options:(id)a1 clientPort:(unsigned int)a2 withResult:(id /* block */)a3;

@end
