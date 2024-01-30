@class SignedObject, VRFWitness, NSString;

@interface MarkForDeletionResponse : GPBMessage

@property (nonatomic) int status;
@property (retain, nonatomic) SignedObject *smt;
@property (nonatomic) BOOL hasSmt;
@property (retain, nonatomic) VRFWitness *uriWitness;
@property (nonatomic) BOOL hasUriWitness;
@property (copy, nonatomic) NSString *serverEventInfo;

+ (id)descriptor;

@end
