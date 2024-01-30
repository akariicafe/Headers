@class NSMutableDictionary;

@interface SSVRedeemCodeItem : NSObject

@property (readonly, nonatomic) NSMutableDictionary *redeemCodeDictionary;
@property (readonly, nonatomic) long long itemIdentifier;

- (void).cxx_destruct;
- (id)initWithLookupItem:(id)a0;
- (id)initWithRedeemCodeDictionary:(id)a0;

@end
