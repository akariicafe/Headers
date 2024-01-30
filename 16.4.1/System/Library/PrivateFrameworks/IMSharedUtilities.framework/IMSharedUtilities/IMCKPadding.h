@interface IMCKPadding : NSObject

+ (long long)_paddingForType:(int)a0 originalSize:(long long)a1 error:(struct __CFError **)a2;
+ (id)_randomDataWithLength:(long long)a0;
+ (id)paddingForMessageOfSize:(long long)a0;

@end
