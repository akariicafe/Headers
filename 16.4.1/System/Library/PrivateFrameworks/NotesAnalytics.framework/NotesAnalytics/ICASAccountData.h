@class NSString, ICASAccountType;

@interface ICASAccountData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASAccountType *accountType;
@property (readonly, nonatomic) NSString *accountID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithAccountType:(id)a0 accountID:(id)a1;

@end
