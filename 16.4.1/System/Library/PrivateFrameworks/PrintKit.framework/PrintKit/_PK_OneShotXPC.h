@class NSXPCConnection;

@interface _PK_OneShotXPC : NSObject

@property (retain, nonatomic) NSXPCConnection *pkBrowseConnection;

+ (void)doOneShot:(id /* block */)a0;
+ (BOOL)withTimeout:(int)a0 doSyncronousOneShot:(id /* block */)a1;

- (void)dealloc;
- (id)init;

@end
