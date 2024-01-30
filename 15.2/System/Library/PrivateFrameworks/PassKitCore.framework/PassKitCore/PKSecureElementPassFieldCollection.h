@class NSDictionary, NSArray;

@interface PKSecureElementPassFieldCollection : NSObject

@property (copy, nonatomic) NSDictionary *fieldsDictionary;
@property (readonly, copy, nonatomic) NSArray *balanceFields;
@property (readonly, copy, nonatomic) NSArray *commutePlans;

- (id)initWithFieldsDictionary:(id)a0;
- (id)initWithPassDictionary:(id)a0;
- (id)initWithBalanceFieldsFromPass:(id)a0;
- (void).cxx_destruct;

@end
