@interface TSWPDropCap : TSKSosBase <NSCopying, NSMutableCopying>

@property (nonatomic) long long dropCapType;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) unsigned long long numberOfRaisedLines;
@property (nonatomic) double outdent;
@property (nonatomic) double padding;
@property (nonatomic) BOOL shapeEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double characterScale;
@property (nonatomic) long long wrapType;
@property (nonatomic) unsigned long long numberOfCharacters;

+ (id)dropCap;
+ (Class)mutableClass;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)localizationDictionary;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithLocalizationDictionary:(id)a0;
- (void)setValuesWithLocalizationDictionary:(id)a0;
- (id)initWithType:(long long)a0 numberOfLines:(unsigned long long)a1 numberOfRaisedLines:(unsigned long long)a2 outdent:(double)a3 padding:(double)a4 shapeEnabled:(BOOL)a5 cornerRadius:(double)a6 characterScale:(double)a7 wrapType:(long long)a8 numberOfCharacters:(unsigned long long)a9;
- (id)initWithType:(long long)a0 numberOfLines:(unsigned long long)a1 numberOfRaisedLines:(unsigned long long)a2;

@end
