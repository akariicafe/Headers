@class NSDictionary, NSMutableDictionary;

@interface SKActionTable : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSDictionary *actionTableDictionary;
@property (retain, nonatomic) NSMutableDictionary *_info;

+ (id)actionTableWithContentsOfDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfDictionary:(id)a0;
- (id)actionForName:(id)a0;
- (BOOL)isEqualToActionTable:(id)a0;

@end
