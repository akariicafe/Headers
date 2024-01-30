@class NSData, NSNumber;

@interface HMMTRSoftwareUpdateProviderApplyUpdateRequestParams : NSObject

@property (readonly) NSData *updateToken;
@property (readonly) NSNumber *softwareVersion;

- (void).cxx_destruct;
- (id)initWithUpdateToken:(id)a0 softwareVersion:(id)a1;

@end
