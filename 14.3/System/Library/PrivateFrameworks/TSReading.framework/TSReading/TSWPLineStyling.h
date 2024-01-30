@class TSSPropertyMap;

@interface TSWPLineStyling : NSObject <NSCopying>

@property (readonly, nonatomic) long long lineCount;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, retain, nonatomic) TSSPropertyMap *additionalCharacterStylePropertyMap;
@property (readonly, retain, nonatomic) TSSPropertyMap *overrideCharacterStylePropertyMap;

+ (id)lineStylingWithLineCount:(long long)a0 options:(unsigned long long)a1 additionalCharacterStylePropertyMap:(id)a2 overrideCharacterStylePropertyMap:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_optionsDescription;
- (id)initWithLineCount:(long long)a0 options:(unsigned long long)a1 additionalCharacterStylePropertyMap:(id)a2 overrideCharacterStylePropertyMap:(id)a3;

@end
