@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MLFairPlayDecryptSessionManager : NSObject

@property (readonly, retain) NSMutableDictionary *modelPathToSessionID;
@property (readonly) struct { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned int x0; unsigned int x1; unsigned char x2[128]; unsigned int x3; unsigned char x4[4096]; } x3; struct { unsigned char x0[16]; unsigned char x1[16]; unsigned char x2[16]; } x4; } *sessionContext;
@property (readonly, retain) NSObject<OS_dispatch_queue> *syncQueue;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)startDecryptionOfModelAtPath:(id)a0 usingKeyBlob:(id)a1 error:(id *)a2;
- (int)stopDecryptionOfModelAtPath:(id)a0;
- (BOOL)stopDecryptionOfModelAtPath:(id)a0 error:(id *)a1;

@end
