@interface CLKFont : UIFont

+ (id)fontWithName:(id)a0 size:(double)a1;
+ (id)systemFontOfSize:(double)a0 weight:(double)a1 design:(id)a2;
+ (id)fontWithDescriptor:(id)a0 size:(double)a1;
+ (id)systemFontOfSize:(double)a0;
+ (id)systemFontOfSize:(double)a0 weight:(double)a1;
+ (id)compactSoftFontOfSize:(double)a0 weight:(double)a1;
+ (id)nonAccessibleCompactSoftFontOfSize:(double)a0 weight:(double)a1;
+ (id)nonAccessibleSystemFontOfSize:(double)a0 weight:(double)a1;

- (id)fontWithSize:(double)a0;

@end
