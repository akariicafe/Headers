@class NSString, VRFWitness, NSData, SignedMutationTimestamp;

@interface InsertResponse : GPBMessage

@property (nonatomic) int status;
@property (retain, nonatomic) SignedMutationTimestamp *smt;
@property (nonatomic) BOOL hasSmt;
@property (retain, nonatomic) VRFWitness *uriWitness;
@property (nonatomic) BOOL hasUriWitness;
@property (copy, nonatomic) NSData *accountId;
@property (retain, nonatomic) VRFWitness *deviceIdWitness;
@property (nonatomic) BOOL hasDeviceIdWitness;
@property (retain, nonatomic) VRFWitness *clientDataWitness;
@property (nonatomic) BOOL hasClientDataWitness;
@property (copy, nonatomic) NSString *serverEventInfo;

+ (id)descriptor;

@end
