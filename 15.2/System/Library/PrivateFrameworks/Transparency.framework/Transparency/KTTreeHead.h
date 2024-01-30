@class NSString, NSData, NSSet;

@interface KTTreeHead : NSManagedObject

@property (copy, nonatomic) NSString *application;
@property (nonatomic) long long consistencyVerified;
@property (nonatomic) long long gossip;
@property (nonatomic) long long inclusionVerified;
@property (nonatomic) BOOL isMapHead;
@property (nonatomic) long long logBeginTime;
@property (retain, nonatomic) NSData *logHeadHash;
@property (nonatomic) long long logType;
@property (nonatomic) double receiptTime;
@property (nonatomic) long long revision;
@property (nonatomic) long long signatureVerified;
@property (retain, nonatomic) NSData *sth;
@property (retain, nonatomic) NSSet *failures;

+ (id)fetchRequest;

@end
