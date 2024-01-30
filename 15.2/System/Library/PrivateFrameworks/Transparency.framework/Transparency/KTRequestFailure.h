@class NSString, NSData, KTRequest;

@interface KTRequestFailure : NSManagedObject

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSData *proofOfFailure;
@property (retain, nonatomic) KTRequest *request;

+ (id)fetchRequest;

@end
