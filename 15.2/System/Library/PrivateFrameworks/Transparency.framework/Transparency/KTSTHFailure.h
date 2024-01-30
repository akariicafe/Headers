@class NSString, NSData, KTTreeHead;

@interface KTSTHFailure : NSManagedObject

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSData *proofOfFailure;
@property (nonatomic) long long verificationType;
@property (retain, nonatomic) KTTreeHead *sth;

+ (id)fetchRequest;

@end
