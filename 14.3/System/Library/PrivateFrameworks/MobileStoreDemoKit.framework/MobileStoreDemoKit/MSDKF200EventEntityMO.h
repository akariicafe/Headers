@class NSString, NSDictionary;

@interface MSDKF200EventEntityMO : NSManagedObject

@property (nonatomic) BOOL committed;
@property (copy, nonatomic) NSString *dedupKey;
@property (copy, nonatomic) NSString *kind;
@property (retain, nonatomic) NSDictionary *optionalKeys;
@property (copy, nonatomic) NSString *senderUid;
@property (copy, nonatomic) NSString *sourceUid;
@property (nonatomic) long long timestamp;

+ (id)fetchRequest;

@end
