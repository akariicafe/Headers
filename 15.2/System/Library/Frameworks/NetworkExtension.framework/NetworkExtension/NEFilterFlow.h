@class NSMutableArray, NSString, NSUUID, NSData, NEFilterAbsoluteVerdict, NSObject, NSURL;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NEFilterFlow : NSObject <NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NEFilterAbsoluteVerdict *currentVerdict;
@property BOOL isRemediationFlow;
@property (copy) NSString *sourceAppIdentifier;
@property (copy) NSString *sourceAppVersion;
@property (copy) NSData *sourceAppUniqueIdentifier;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) NSURL *URL;
@property (copy) NSUUID *flowUUID;
@property int pid;
@property int epid;
@property long long direction;
@property (retain) NSData *sourceAppAuditToken;
@property BOOL isPaused;
@property (retain) NSMutableArray *savedMessageHandlerQueue;
@property BOOL reportAtEnd;
@property BOOL sourceAppIdentifierFromApp;
@property unsigned long long inBytes;
@property unsigned long long outBytes;
@property (retain) NSData *crypto_signature;
@property (retain) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) NSString *identifierString;
@property (readonly) NSUUID *identifier;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)createDataReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (BOOL)createNewFlowReply:(id)a0 controlSocket:(int)a1 verdict:(id)a2 context:(id)a3;
- (void)updateSourceAppInfo:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)createDataCompleteReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (id)description;
- (BOOL)shouldCloseWithVerdict:(id)a0;
- (id)initWithURL:(id)a0 sourceAppIdentifier:(id)a1;
- (BOOL)updateCurrentVerdictFromDataVerdict:(id)a0 direction:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
