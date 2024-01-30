@class NSString;

@interface DBDateFormatterToken : NSObject <NSCopying>

@property (copy, nonatomic) NSString *formatString;
@property (nonatomic) unsigned long long dateStyle;
@property (nonatomic) unsigned long long timeStyle;

+ (id)tokenWithDateStyle:(unsigned long long)a0 timeStyle:(unsigned long long)a1;
+ (id)tokenWithFormatString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
