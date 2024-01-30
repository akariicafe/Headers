@class NSString, VRFWitness, NSData, SignedMutationTimestamp;

@interface MarkForDeletionResponse : GPBMessage

@property (nonatomic) int status;
@property (retain, nonatomic) SignedMutationTimestamp *smt;
@property (nonatomic) BOOL hasSmt;
@property (retain, nonatomic) VRFWitness *uriWitness;
@property (nonatomic) BOOL hasUriWitness;
@property (copy, nonatomic) NSData *accountId;
@property (copy, nonatomic) NSString *serverEventInfo;

+ (id)descriptor;

@end
