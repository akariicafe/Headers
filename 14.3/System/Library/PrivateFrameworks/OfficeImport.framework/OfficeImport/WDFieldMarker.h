@class NSData;

@interface WDFieldMarker : WDRunWithCharacterProperties {
    int mFieldPosition;
    int mMarkerType;
    unsigned char mFieldType;
    NSData *mData;
    unsigned char mZombieEmbed : 1;
    unsigned char mResultDirty : 1;
    unsigned char mResultEdited : 1;
    unsigned char mLocked : 1;
    unsigned char mPrivateResult : 1;
    unsigned char mNested : 1;
    unsigned char mHasSeparator : 1;
}

- (void)setHasSeparator:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)hasSeparator;
- (id)data;
- (BOOL)locked;
- (id)description;
- (BOOL)nested;
- (unsigned char)fieldType;
- (void)setData:(id)a0;
- (void)setLocked:(BOOL)a0;
- (int)runType;
- (void)setFieldType:(unsigned char)a0;
- (id)initWithParagraph:(id)a0;
- (int)fieldMarkerType;
- (void)setFieldPosition:(int)a0;
- (void)setFieldMarkerType:(int)a0;
- (int)fieldPosition;
- (BOOL)zombieEmbed;
- (void)setZombieEmbed:(BOOL)a0;
- (BOOL)resultDirty;
- (void)setResultDirty:(BOOL)a0;
- (BOOL)resultEdited;
- (void)setResultEdited:(BOOL)a0;
- (BOOL)privateResult;
- (void)setPrivateResult:(BOOL)a0;
- (void)setNested:(BOOL)a0;

@end
