@interface EDLinkReference : NSObject {
    unsigned long long mLinkIndex;
    unsigned long long mFirstSheetIndex;
    unsigned long long mLastSheetIndex;
}

+ (id)linkReferenceWithLinkIndex:(unsigned long long)a0 firstSheetIndex:(unsigned long long)a1 lastSheetIndex:(unsigned long long)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (unsigned long long)linkIndex;
- (void)setLinkIndex:(unsigned long long)a0;
- (unsigned long long)firstSheetIndex;
- (id)initWithLinkIndex:(unsigned long long)a0 firstSheetIndex:(unsigned long long)a1 lastSheetIndex:(unsigned long long)a2;
- (BOOL)isEqualToLinkReference:(id)a0;
- (BOOL)isWorkbookLevelReference;
- (unsigned long long)lastSheetIndex;
- (void)setFirstSheetIndex:(unsigned long long)a0;
- (void)setLastSheetIndex:(unsigned long long)a0;

@end
