@class FBSSystemService;

@interface BKSSystemService : NSObject {
    FBSSystemService *_fbsSystemService;
}

- (int)pidForApplication:(id)a0;
- (unsigned int)createClientPort;
- (void)openApplication:(id)a0 options:(id)a1 withResult:(id /* block */)a2;
- (void)terminateApplication:(id)a0 forReason:(int)a1 andReport:(BOOL)a2 withDescription:(id)a3;
- (id)systemApplicationBundleIdentifier;
- (void)cleanupClientPort:(unsigned int)a0;
- (void)openURL:(id)a0 application:(id)a1 options:(id)a2 clientPort:(unsigned int)a3 withResult:(id /* block */)a4;
- (id)init;
- (void)openApplication:(id)a0 options:(id)a1 clientPort:(unsigned int)a2 withResult:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)canOpenApplication:(id)a0 reason:(int *)a1;

@end
