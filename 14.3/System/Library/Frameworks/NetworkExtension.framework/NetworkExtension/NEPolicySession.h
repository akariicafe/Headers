@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEPolicySession : NSObject <NEPrettyDescription>

@property long long internalPriority;
@property (retain) NSMutableDictionary *policies;
@property (retain) NSObject<OS_dispatch_queue> *ioQueue;
@property (retain) NSObject<OS_dispatch_semaphore> *responseSemaphore;
@property (retain) NSData *lastReceivedResponse;
@property unsigned int lastSendMessageID;
@property int sessionFD;
@property long long priority;

+ (id)copyTLVForBytes:(const char *)a0 messageLength:(unsigned long long)a1 type:(unsigned char)a2 includeHeaderOffset:(BOOL)a3 n:(int)a4;
+ (unsigned int)messageIDForMessage:(id)a0;
+ (id)policyDumpFromData:(id)a0;
+ (BOOL)isTLVValid:(char *)a0 cursorCurrent:(char *)a1 totalLength:(unsigned long long)a2;
+ (unsigned char)getTLVtypeForBytes:(const char *)a0 includeHeaderOffset:(BOOL)a1 nextTLVOffset:(unsigned int *)a2;
+ (unsigned int)policyIDFromMessage:(id)a0;
+ (id)readTLVOfType:(unsigned char)a0 startCursor:(char *)a1 currentCursor:(char **)a2 totalLength:(unsigned long long)a3 readTLVInstance:(unsigned int)a4;
+ (id)errorFromMessage:(id)a0;
+ (id)parseTLVResponseForDump:(id)a0;
+ (void)addTLVToMessage:(id)a0 type:(unsigned char)a1 length:(unsigned long long)a2 value:(const void *)a3;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSocket:(int)a0;
- (BOOL)registerServiceUUID:(id)a0;
- (BOOL)lockSessionToCurrentProcess;
- (BOOL)unregisterServiceUUID:(id)a0;
- (BOOL)removePolicyWithID:(unsigned long long)a0;
- (BOOL)removeAllPolicies;
- (unsigned long long)addPolicy:(id)a0;
- (id)priorityString;
- (id)createTLVMessage:(unsigned char)a0;
- (unsigned long long)addPolicy:(id)a0 storeLocally:(BOOL)a1;
- (id)initFromPrivilegedProcess;
- (id)initWithSessionName:(id)a0;
- (id)dumpKernelPolicies;
- (id)policyWithID:(unsigned long long)a0;
- (BOOL)apply;
- (id)description;
- (int)dupSocket;

@end
