@class NSString, NSNumber;

@interface SKUIGiftAmount : NSObject <NSCopying>

@property (copy, nonatomic) NSString *displayLabel;
@property (copy, nonatomic) NSString *partNumber;
@property (copy, nonatomic) NSNumber *value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)HTTPBodyDictionary;
- (id)initWithAmountDictionary:(id)a0;

@end
