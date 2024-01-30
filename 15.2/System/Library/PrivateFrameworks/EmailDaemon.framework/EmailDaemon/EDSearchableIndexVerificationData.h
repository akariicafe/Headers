@class NSString, NSArray, NSDictionary, NSDate, NSNumber;

@interface EDSearchableIndexVerificationData : NSObject <NSCopying>

@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSArray *toEmailAddresses;
@property (copy, nonatomic) NSString *deleted;
@property (retain, nonatomic) NSNumber *transactionID;
@property (retain, nonatomic) NSNumber *flags;
@property (retain, nonatomic) NSNumber *indexedAsEmptySubject;
@property (retain, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
