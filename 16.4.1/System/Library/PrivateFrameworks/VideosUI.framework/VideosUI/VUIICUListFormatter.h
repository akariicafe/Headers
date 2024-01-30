@class NSString;

@interface VUIICUListFormatter : NSListFormatter

@property (copy, nonatomic) NSString *style;

+ (id)localizedStringByJoiningStrings:(id)a0;
+ (id)localizedStringByJoiningStrings:(id)a0 style:(id)a1;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)_stringFromStringArray:(id)a0;
- (id)initWithLocale:(id)a0 style:(id)a1;

@end
