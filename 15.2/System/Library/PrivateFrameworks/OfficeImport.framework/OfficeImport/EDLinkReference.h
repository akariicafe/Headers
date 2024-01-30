@interface EDLinkReference : NSObject {
    unsigned long long mLinkIndex;
    unsigned long long mFirstSheetIndex;
    unsigned long long mLastSheetIndex;
}

+ (id)linkReferenceWithLinkIndex:(unsigned long long)a0 firstSheetIndex:(unsigned long long)a1 lastSheetIndex:(unsigned long long)a2;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)setLinkIndex:(unsigned long long)a0;
- (unsigned long long)linkIndex;
- (unsigned long long)firstSheetIndex;
- (unsigned long long)lastSheetIndex;
- (id)initWithLinkIndex:(unsigned long long)a0 firstSheetIndex:(unsigned long long)a1 lastSheetIndex:(unsigned long long)a2;
- (BOOL)isEqualToLinkReference:(id)a0;
- (void)setFirstSheetIndex:(unsigned long long)a0;
- (void)setLastSheetIndex:(unsigned long long)a0;
- (BOOL)isWorkbookLevelReference;

@end
