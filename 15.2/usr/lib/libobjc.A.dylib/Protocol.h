@interface Protocol : NSObject

- (struct objc_method_description { SEL x0; char *x1; } *)descriptionForInstanceMethod:(SEL)a0;
- (BOOL)conformsTo:(id)a0;
- (struct objc_method_description { SEL x0; char *x1; } *)descriptionForClassMethod:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (const char *)name;
- (unsigned long long)hash;

@end
