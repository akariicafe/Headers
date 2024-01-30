@interface TIKeyEventMap_zh_Hant_Zhuyin_LiveConversion : TIKeyEventMap_zh_Hant_Zhuyin

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (BOOL)shouldInsertZhuyinCharacterAfter:(id)a0;
- (long long)candidateNumberKey:(int)a0;

@end
