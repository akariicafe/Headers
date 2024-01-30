@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject {
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    long long mStartNumber;
    BOOL mStartNumberOverridden;
}

- (unsigned char)level;
- (id)description;
- (void).cxx_destruct;
- (void)setStartNumber:(long long)a0;
- (id)mutableListLevel;
- (BOOL)isStartNumberOverridden;
- (long long)startNumber;
- (BOOL)isListLevelOverridden;
- (id)listLevel;
- (id)initWithDocument:(id)a0 level:(unsigned char)a1;

@end
