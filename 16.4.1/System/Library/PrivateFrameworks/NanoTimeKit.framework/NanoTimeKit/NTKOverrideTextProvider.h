@class NSString;

@interface NTKOverrideTextProvider : CLKTextProvider

@property (copy, nonatomic) id /* block */ overrideBlock;
@property (copy, nonatomic) NSString *text;

+ (id)_dashTrackingTextProviderWithDashes:(id)a0 tracking:(double)a1;
+ (id)_dashTrackingTextProviderWithDashes:(id)a0 tracking:(double)a1 weight:(double)a2;
+ (id)textProviderWithText:(id)a0 overrideBlock:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;

@end
