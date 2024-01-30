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

+ (void)addTLVToMessage:(id)a0 type:(unsigned char)a1 length:(unsigned long long)a2 value:(const void *)a3;
+ (id)copyTLVForBytes:(const char *)a0 messageLength:(unsigned long long)a1 type:(unsigned char)a2 includeHeaderOffset:(BOOL)a3 n:(int)a4;
+ (unsigned char)getTLVtypeForBytes:(const char *)a0 includeHeaderOffset:(BOOL)a1 nextTLVOffset:(unsigned int *)a2;
+ (BOOL)isTLVValid:(char *)a0 cursorCurrent:(char *)a1 totalLength:(unsigned long long)a2;
+ (id)readTLVOfType:(unsigned char)a0 startCursor:(char *)a1 currentCursor:(char **)a2 totalLength:(unsigned long long)a3 readTLVInstance:(unsigned int)a4;
+ (id)policyDumpFromData:(id)a0;
+ (id)parseTLVResponseForDump:(id)a0;
+ (id)errorFromMessage:(id)a0;
+ (unsigned int)policyIDFromMessage:(id)a0;
+ (unsigned int)messageIDForMessage:(id)a0;

- (BOOL)apply;
- (BOOL)removeAllPolicies;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)addPolicy:(id)a0;
- (id)description;
- (id)priorityString;
- (id)policyWithID:(unsigned long long)a0;
- (id)initFromPrivilegedProcess;
- (id)initWithSessionName:(id)a0;
- (id)createTLVMessage:(unsigned char)a0;
- (id)dumpKernelPolicies;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithSocket:(int)a0;
- (BOOL)lockSessionToCurrentProcess;
- (BOOL)registerServiceUUID:(id)a0;
- (BOOL)unregisterServiceUUID:(id)a0;
- (unsigned long long)addPolicy:(id)a0 storeLocally:(BOOL)a1;
- (BOOL)removePolicyWithID:(unsigned long long)a0;
- (int)dupSocket;

@end
