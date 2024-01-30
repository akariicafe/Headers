@class FBSSystemService;

@interface BKSSystemService : NSObject {
    FBSSystemService *_fbsSystemService;
}

- (id)systemApplicationBundleIdentifier;
- (id)init;
- (void)terminateApplicationGroup:(int)a0 forReason:(int)a1 andReport:(BOOL)a2 withDescription:(id)a3;
- (void).cxx_destruct;
- (void)openApplication:(id)a0 options:(id)a1 withResult:(id /* block */)a2;
- (unsigned int)createClientPort;
- (BOOL)canOpenApplication:(id)a0 reason:(int *)a1;
- (void)openURL:(id)a0 application:(id)a1 options:(id)a2 clientPort:(unsigned int)a3 withResult:(id /* block */)a4;
- (int)pidForApplication:(id)a0;
- (void)cleanupClientPort:(unsigned int)a0;
- (void)openApplication:(id)a0 options:(id)a1 clientPort:(unsigned int)a2 withResult:(id /* block */)a3;
- (void)terminateApplication:(id)a0 forReason:(int)a1 andReport:(BOOL)a2 withDescription:(id)a3;

@end
