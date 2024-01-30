@class NSString, ICASAccountType, NSNumber;

@interface ICASAccountTypeItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASAccountType *accountType;
@property (readonly, nonatomic) NSNumber *countOfAccounts;
@property (readonly, nonatomic) NSNumber *countOfNotes;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithAccountType:(id)a0 countOfAccounts:(id)a1 countOfNotes:(id)a2;

@end
