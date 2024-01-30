@class NSString, UIColor;

@interface WLDetailItem : NSObject

@property (copy, nonatomic) NSString *symbol;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) UIColor *symbolTintColor;

+ (id)items:(id)a0 size:(unsigned long long *)a1;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 count:(unsigned long long)a1 secondaryText:(id)a2 alternativeTextUsed:(BOOL)a3 symbolFilled:(BOOL)a4 symbolTintColor:(id)a5;

@end
