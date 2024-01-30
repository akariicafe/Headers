@class NSString;

@interface CoreThemeConstantHelper : NSObject {
    unsigned long long _identifier;
    NSString *_label;
    NSString *_displayName;
}

+ (id)helperForStructAtIndex:(long long)a0 inAssociatedGlobalList:(void *)a1;

- (id)displayName;
- (long long)identifier;
- (id)description;
- (id)label;
- (void)dealloc;

@end
