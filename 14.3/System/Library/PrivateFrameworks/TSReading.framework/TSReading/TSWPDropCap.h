@class NSArray, TSSPropertyMap;

@interface TSWPDropCap : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long charCount;
@property (readonly, retain, nonatomic) TSSPropertyMap *characterStyleOverridePropertyMap;
@property (readonly, retain, nonatomic) NSArray *spacings;

+ (id)dropCapWithCharCount:(unsigned long long)a0 characterStyleOverridePropertyMap:(id)a1 spacing:(id)a2;
+ (id)dropCapWithCharCount:(unsigned long long)a0 characterStyleOverridePropertyMap:(id)a1 lineCount:(unsigned long long)a2;
+ (id)dropCapWithCharCount:(unsigned long long)a0 characterStyleOverridePropertyMap:(id)a1 spacings:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCharCount:(unsigned long long)a0 characterStyleOverridePropertyMap:(id)a1 spacings:(id)a2;
- (unsigned long long)computedFlagsForSpacing:(id)a0;

@end
