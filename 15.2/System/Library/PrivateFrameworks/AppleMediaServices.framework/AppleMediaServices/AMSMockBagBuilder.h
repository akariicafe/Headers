@class NSMutableDictionary, NSString, NSDate, AMSMutableBagKeySet;

@interface AMSMockBagBuilder : NSObject

@property (retain, nonatomic) AMSMutableBagKeySet *bagKeySet;
@property (retain, nonatomic) NSMutableDictionary *data;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;

- (id)createMockBag;
- (void)addBagKey:(id)a0 value:(id)a1 valueType:(unsigned long long)a2;
- (void)unionBagKeySet:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
