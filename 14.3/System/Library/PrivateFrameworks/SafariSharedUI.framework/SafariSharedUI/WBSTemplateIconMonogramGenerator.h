@interface WBSTemplateIconMonogramGenerator : NSObject

+ (id)monogramWithTitle:(id)a0 url:(id)a1 backgroundColor:(id)a2;
+ (id)_monogramStringForPreparedTitle:(id)a0 url:(id)a1;
+ (id)monogramWithTitle:(id)a0 url:(id)a1 size:(struct CGSize { double x0; double x1; })a2 fontSize:(double)a3 fontWeight:(long long)a4 baselineOffset:(double)a5 backgroundColor:(id)a6 cornerRadius:(double)a7;
+ (id)monogramStringForURL:(id)a0;
+ (id)monogramStringForTitle:(id)a0 url:(id)a1;
+ (id)monogramWithTitle:(id)a0 url:(id)a1 monogramConfiguration:(id)a2;

@end
