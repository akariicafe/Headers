@class NSString, NSDate;

@interface WBSParsecSubscriptionInfo : NSObject

@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0;

@end
