@class NSData, NSString, NSArray, CUPairedPeer, CUAppleIDClient, NSMutableDictionary, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CUPairingSession : NSObject {
    struct PairingSessionPrivate { } *_pairingSession;
    NSMutableDictionary *_pairingStreams;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) NSDictionary *acl;
@property (readonly, copy, nonatomic) NSDictionary *aclActual;
@property (copy, nonatomic) NSDictionary *additionalPeerInfo;
@property (copy, nonatomic) NSDictionary *additionalSelfInfo;
@property (copy, nonatomic) NSArray *allowedMACAddresses;
@property (readonly, nonatomic) unsigned long long peerAppFlags;
@property (nonatomic) unsigned long long selfAppFlags;
@property (readonly, copy, nonatomic) NSDictionary *appInfoPeer;
@property (copy, nonatomic) NSDictionary *appInfoSelf;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *fixedPIN;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) CUPairedPeer *pairedPeer;
@property (readonly, copy, nonatomic) NSDictionary *peerInfo;
@property (nonatomic) unsigned int pinType;
@property (readonly, nonatomic) unsigned int pinTypeActual;
@property (nonatomic) unsigned int sessionType;
@property (copy, nonatomic) NSData *mfiCertificateData;
@property (copy, nonatomic) NSString *mfiProductType;
@property (copy, nonatomic) NSString *mfiSerialNumber;
@property (copy, nonatomic) NSData *mfiToken;
@property (copy, nonatomic) NSString *myAppleID;
@property (retain, nonatomic) CUAppleIDClient *myAppleIDInfoClient;
@property (copy, nonatomic) NSString *peerAppleID;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (copy, nonatomic) id /* block */ showPINHandlerEx;
@property (copy, nonatomic) id /* block */ showPINHandler;
@property (copy, nonatomic) id /* block */ hidePINHandler;
@property (copy, nonatomic) id /* block */ sendDataHandler;
@property (copy, nonatomic) id /* block */ signDataHandler;
@property (copy, nonatomic) id /* block */ verifySignatureHandler;
@property (copy, nonatomic) id /* block */ copyIdentityHandler;
@property (copy, nonatomic) id /* block */ findPeerHandler;
@property (copy, nonatomic) id /* block */ savePeerHandler;

- (void)_cleanup;
- (int)deriveKeyWithSaltPtr:(const void *)a0 saltLen:(unsigned long long)a1 infoPtr:(const void *)a2 infoLen:(unsigned long long)a3 keyLen:(unsigned long long)a4 outputKeyPtr:(void *)a5;
- (void)_tryPIN:(id)a0;
- (void)tryPIN:(id)a0;
- (void)_completed:(id)a0;
- (void)_receivedData:(id)a0 flags:(unsigned int)a1;
- (void)_activate;
- (void)closeStream:(id)a0;
- (void)dealloc;
- (id)openStreamWithName:(id)a0 type:(int)a1 error:(id *)a2;
- (id)openStreamWithName:(id)a0 error:(id *)a1;
- (id)init;
- (void)receivedData:(id)a0;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;

@end
