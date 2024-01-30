@interface Protocol : NSObject

- (BOOL)conformsTo:(id)a0;
- (unsigned long long)hash;
- (struct objc_method_description { SEL x0; char *x1; } *)descriptionForClassMethod:(SEL)a0;
- (struct objc_method_description { SEL x0; char *x1; } *)descriptionForInstanceMethod:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (const char *)name;

@end
