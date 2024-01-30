@class NSUUID, DMFControlGroupIdentifier, NSString, NSData, NSDictionary;

@interface CRKRequestCertificatesIDSMessage : NSObject <CRKIDSMessage>

@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (readonly, nonatomic) DMFControlGroupIdentifier *controlGroupIdentifier;
@property (readonly, nonatomic) long long sourceRole;
@property (readonly, nonatomic) long long destinationRole;
@property (readonly, copy, nonatomic) NSString *destinationDeviceIdentifier;
@property (readonly, copy, nonatomic) NSData *requesterCertificate;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;
+ (id)messageWithControlGroupIdentifier:(id)a0 destinationDeviceIdentifier:(id)a1 sourceRole:(long long)a2 destinationRole:(long long)a3 requesterCertificate:(id)a4;

- (void).cxx_destruct;
- (id)initWithRequestIdentifier:(id)a0 controlGroupIdentifier:(id)a1 destinationDeviceIdentifier:(id)a2 sourceRole:(long long)a3 destinationRole:(long long)a4 requesterCertificate:(id)a5;

@end
