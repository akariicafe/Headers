@class NSString, NSData, KTSignedMutationTimestamp;

@interface KTSMTFailure : NSManagedObject

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSData *proofOfFailure;
@property (retain, nonatomic) KTSignedMutationTimestamp *smt;

+ (id)fetchRequest;

@end
