@class NSString;

@interface BBBulletinTransaction : NSObject

@property (readonly, copy, nonatomic) NSString *bulletinID;
@property (readonly, nonatomic) unsigned long long transactionID;

+ (id)transactionWithBulletinID:(id)a0;

- (void).cxx_destruct;
- (id)initWithBulletinID:(id)a0;
- (id)description;
- (unsigned long long)incrementTransactionID;

@end
