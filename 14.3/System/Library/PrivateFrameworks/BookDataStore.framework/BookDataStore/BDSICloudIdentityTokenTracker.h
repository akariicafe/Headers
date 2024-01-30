@class NSMutableDictionary, NSURL, BDSICloudIdentityToken, NSObject;
@protocol OS_dispatch_queue;

@interface BDSICloudIdentityTokenTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *plistContents;
@property (retain, nonatomic) NSURL *plistURL;
@property (retain, nonatomic) BDSICloudIdentityToken *currentToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL trackLiverpool;

- (void).cxx_destruct;
- (id)initWithContainerURL:(id)a0 trackingLiverpool:(BOOL)a1;
- (void)fetchCurrentToken;
- (void)forceUpdateTokenWithString:(id)a0;
- (BOOL)didUnacknowledgediCloudLogoutOccur;
- (void)acknowledgeiCloudIdentity;

@end
