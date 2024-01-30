@class NSString;

@interface BBBulletinTransaction : NSObject

@property (readonly, copy, nonatomic) NSString *bulletinID;
@property (readonly, nonatomic) unsigned long long transactionID;

+ (id)transactionWithBulletinID:(id)a0;

- (id)initWithBulletinID:(id)a0;
- (unsigned long long)incrementTransactionID;
- (id)description;
- (void).cxx_destruct;

@end
