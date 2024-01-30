@interface MFDataDetectors : NSObject

+ (id)urlMatchesForString:(id)a0;
+ (id)urlMatchesForString:(id)a0 includingTel:(BOOL)a1;
+ (BOOL)urlIfyNode:(id)a0 phoneNumberTypes:(unsigned long long)a1;
+ (BOOL)urlIfyNode:(id)a0;
+ (Class)_DDURLifierClass;
+ (id)sharedDetectionController;

@end
