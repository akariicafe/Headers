@class NSString, OS_remote_device, NSURL, NSDictionary, NSNumber, NSData;

@interface PersonalizedImage : NSObject

@property (retain, nonatomic) OS_remote_device *remoteDevice;
@property (retain, nonatomic) NSURL *bundlePathURL;
@property (retain, nonatomic) NSDictionary *mountedVolumeEntry;
@property (retain, nonatomic) NSURL *imagePathURL;
@property (retain, nonatomic) NSString *imageVariant;
@property (retain, nonatomic) NSURL *trustCacheURL;
@property (retain, nonatomic) NSNumber *ecid;
@property (retain, nonatomic) NSNumber *chipID;
@property (retain, nonatomic) NSNumber *boardID;
@property (retain, nonatomic) NSNumber *securityDomain;
@property (retain, nonatomic) NSNumber *certificateSecurityMode;
@property (retain, nonatomic) NSNumber *certificateProductionStatus;
@property (retain, nonatomic) NSNumber *effectiveSecurityMode;
@property (retain, nonatomic) NSNumber *effectiveProductionStatus;
@property (retain, nonatomic) NSNumber *image4Supported;
@property (retain, nonatomic) NSData *apNonce;
@property (retain, nonatomic) NSData *sepNonce;
@property (copy, nonatomic) NSString *hardwareModel;
@property (copy, nonatomic) NSString *deviceClass;
@property (nonatomic) unsigned int digestLength;
@property (nonatomic) BOOL useCredentials;
@property (retain, nonatomic) NSURL *signingServerURL;
@property (retain, nonatomic) NSURL *userProvidedBundleMountPathURL;
@property (retain, nonatomic) NSURL *userProvidedImagePathURL;
@property (nonatomic) BOOL skipLoadingLaunchDaemons;

- (void).cxx_destruct;
- (void)dealloc;
- (id)digestFileSha1:(id)a0 error:(id *)a1;
- (id)digestFileSha384:(id)a0 error:(id *)a1;
- (BOOL)initializeDeviceAttributes:(id *)a0;
- (BOOL)initializeImageProperties:(id *)a0;
- (id)digestFile:(id)a0 digestLength:(unsigned int)a1 error:(id *)a2;
- (BOOL)mountImage:(id)a0 serverTicket:(id)a1 imageDigest:(id)a2 trustCacheURL:(id)a3 error:(id *)a4;
- (id)initWithBundleURL:(id)a0 imageVariant:(id)a1 remoteDevice:(id)a2 options:(id)a3;
- (BOOL)mountImage:(id *)a0;

@end
