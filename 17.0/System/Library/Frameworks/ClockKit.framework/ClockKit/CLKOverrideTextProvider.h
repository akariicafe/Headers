@class NSString;

@interface CLKOverrideTextProvider : CLKTextProvider

@property (copy, nonatomic) id /* block */ overrideBlock;
@property (copy, nonatomic) NSString *text;

+ (id)_dashTrackingTextProviderWithDashes:(id)a0 tracking:(double)a1;
+ (id)textProviderWithText:(id)a0 overrideBlock:(id /* block */)a1;
+ (id)_dashTrackingTextProviderWithDashes:(id)a0 tracking:(double)a1 weight:(double)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;

@end
