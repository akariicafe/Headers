@class NSString, NSDictionary;

@interface HMDCameraClipsQuotaServerNotification : HMFObject

@property (readonly, copy) NSString *containerIdentifier;
@property (readonly) long long reason;
@property (readonly, copy) NSString *requestID;
@property (readonly, copy) NSString *userDSID;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainerIdentifier:(id)a0 reason:(long long)a1 requestID:(id)a2 userDSID:(id)a3;

@end
