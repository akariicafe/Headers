@class NSString, NSXPCListenerEndpoint, DIClient2IODaemonXPCHandler;

@interface DIDeviceHandle : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int ioMedia;
@property (retain, nonatomic) DIClient2IODaemonXPCHandler *client2IOhandler;
@property (nonatomic) BOOL handleRefCount;
@property (readonly, nonatomic) unsigned long long regEntryID;
@property (retain, nonatomic) NSString *BSDName;
@property (retain, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;

+ (unsigned int)copyIOMediaWithService:(unsigned int)a0 error:(id *)a1;
+ (id)copyBSDNameWithService:(unsigned int)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRegEntryID:(unsigned long long)a0 xpcEndpoint:(id)a1;
- (unsigned int)copyKernelServiceWithError:(id *)a0;
- (void)waitForQuietWithService:(unsigned int)a0;
- (BOOL)updateBSDNameWithError:(id *)a0;
- (BOOL)addToRefCountWithError:(id *)a0;
- (id)initWithRegEntryID:(unsigned long long)a0;
- (BOOL)waitForDeviceWithError:(id *)a0;

@end
