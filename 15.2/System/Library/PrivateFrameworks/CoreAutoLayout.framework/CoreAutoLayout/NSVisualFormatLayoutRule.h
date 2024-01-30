@class NSString, NSDictionary, NSLayoutRect;

@interface NSVisualFormatLayoutRule : NSObject <NSLayoutRule> {
    NSString *_visualFormatString;
    unsigned long long _formatOptions;
    NSDictionary *_metricMapping;
    NSDictionary *_rectMapping;
    NSLayoutRect *_containerRect;
}

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleWithVisualFormat:(id)a0 options:(unsigned long long)a1 metrics:(id)a2 rects:(id)a3 containerRect:(id)a4;
+ (id)ruleWithVisualFormat:(id)a0 options:(unsigned long long)a1 metrics:(id)a2 views:(id)a3;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)makeChildRules;

@end
