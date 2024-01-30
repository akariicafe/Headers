@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject {
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    long long mStartNumber;
    BOOL mStartNumberOverridden;
}

- (void).cxx_destruct;
- (unsigned char)level;
- (id)description;
- (BOOL)isListLevelOverridden;
- (id)listLevel;
- (long long)startNumber;
- (void)setStartNumber:(long long)a0;
- (id)mutableListLevel;
- (BOOL)isStartNumberOverridden;
- (id)initWithDocument:(id)a0 level:(unsigned char)a1;

@end
