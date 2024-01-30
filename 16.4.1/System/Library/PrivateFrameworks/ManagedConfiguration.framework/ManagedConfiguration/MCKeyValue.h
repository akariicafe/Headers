@class NSString;

@interface MCKeyValue : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) unsigned long long valueType;

- (void).cxx_destruct;
- (void)setLocalizedArray:(id)a0 localizedKey:(id)a1;
- (id)initWithData:(id)a0 localizedKey:(id)a1;
- (id)initWithDate:(id)a0 localizedKey:(id)a1;
- (id)initWithLocalizedArray:(id)a0 localizedKey:(id)a1;
- (id)initWithLocalizedString:(id)a0 localizedKey:(id)a1;
- (id)initWithValue:(id)a0 localizedKey:(id)a1;
- (void)setData:(id)a0 localizedKey:(id)a1;
- (void)setDate:(id)a0 localizedKey:(id)a1;
- (void)setLocalizedString:(id)a0 localizedKey:(id)a1;
- (void)setValue:(id)a0 localizedKey:(id)a1;

@end
