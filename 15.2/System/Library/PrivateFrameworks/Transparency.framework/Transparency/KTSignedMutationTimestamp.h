@class NSData, NSSet, KTRequest;

@interface KTSignedMutationTimestamp : NSManagedObject

@property (nonatomic) long long mutationTime;
@property (nonatomic) double receiptTime;
@property (nonatomic) long long signatureVerified;
@property (retain, nonatomic) NSData *smt;
@property (nonatomic) long long verificationResult;
@property (retain, nonatomic) NSSet *failures;
@property (retain, nonatomic) KTRequest *request;

+ (id)fetchRequest;

@end
