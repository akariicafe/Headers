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

- (BOOL)locked;
- (void)setLocked:(BOOL)a0;
- (void)setData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setHasSeparator:(BOOL)a0;
- (unsigned char)fieldType;
- (BOOL)hasSeparator;
- (BOOL)nested;
- (id)data;
- (int)runType;
- (void)setFieldType:(unsigned char)a0;
- (id)initWithParagraph:(id)a0;
- (void)setFieldPosition:(int)a0;
- (void)setFieldMarkerType:(int)a0;
- (int)fieldPosition;
- (int)fieldMarkerType;
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
