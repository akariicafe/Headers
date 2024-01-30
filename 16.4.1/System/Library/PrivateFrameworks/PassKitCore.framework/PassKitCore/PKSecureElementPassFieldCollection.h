@class NSDictionary, NSArray;

@interface PKSecureElementPassFieldCollection : NSObject

@property (copy, nonatomic) NSDictionary *fieldsDictionary;
@property (readonly, copy, nonatomic) NSArray *balanceFields;
@property (readonly, copy, nonatomic) NSArray *commutePlans;

- (void).cxx_destruct;
- (id)initWithBalanceFieldsFromPass:(id)a0;
- (id)initWithFieldsDictionary:(id)a0;
- (id)initWithPassDictionary:(id)a0;

@end
