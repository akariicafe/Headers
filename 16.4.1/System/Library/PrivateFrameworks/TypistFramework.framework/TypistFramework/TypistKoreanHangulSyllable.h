@class NSMutableArray;

@interface TypistKoreanHangulSyllable : NSObject {
    NSMutableArray *jamosInSyllable;
    int _syllableStructure;
    BOOL _hasConsonantVariants;
}

@property (nonatomic) unsigned short syllable;

+ (id)decomposeSyllableForScribble:(unsigned short)a0;
+ (BOOL)isKoreanSyllable:(unsigned short)a0;

- (void).cxx_destruct;
- (int)_determineSyllableStructure:(unsigned long long)a0 vowelPositionType:(int)a1;
- (BOOL)_hasConsonantVariants:(id)a0;
- (BOOL)hasConsonantVariants;
- (id)initWithSyllable:(unsigned short)a0;
- (id)jamos;
- (int)syllableStructure;

@end
