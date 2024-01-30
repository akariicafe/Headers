@class NSNumber, NSString, NSData;

@interface HMMTRSoftwareUpdateProviderQueryResponseParams : NSObject

@property (readonly) NSNumber *status;
@property (readonly) NSNumber *delayedActionTime;
@property (readonly) NSString *imageURI;
@property (readonly) NSNumber *softwareVersion;
@property (readonly) NSString *softwareVersionString;
@property (readonly) NSData *updateToken;
@property (readonly) NSNumber *userConsentNeeded;
@property (readonly) NSData *metadataForRequestor;

- (void).cxx_destruct;
- (id)initWithStatus:(id)a0 delayedActionTime:(id)a1 imageURI:(id)a2 softwareVersion:(id)a3 softwareVersionString:(id)a4 updateToken:(id)a5 userConsentNeeded:(id)a6 metadataForRequestor:(id)a7;

@end
