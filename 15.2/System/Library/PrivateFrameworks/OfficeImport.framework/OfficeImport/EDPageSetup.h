@interface EDPageSetup : NSObject {
    int mOrientation;
    int mPageOrder;
    BOOL mCustomFirstPageNumber;
    unsigned long long mFirstPageNumber;
    unsigned long long mFitToHeight;
    unsigned long long mFitToWidth;
    unsigned long long mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;

- (float)topMargin;
- (float)bottomMargin;
- (int)order;
- (id)description;
- (void)setOrder:(int)a0;
- (unsigned long long)scale;
- (int)orientation;
- (void)setOrientation:(int)a0;
- (id)init;
- (void)setLeftMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (void)setBottomMargin:(float)a0;
- (void)setRightMargin:(float)a0;
- (float)rightMargin;
- (void)setScale:(unsigned long long)a0;
- (float)leftMargin;
- (float)headerMargin;
- (float)footerMargin;
- (void)setHeaderMargin:(float)a0;
- (void)setFooterMargin:(float)a0;
- (void)setFirstPageNumber:(unsigned long long)a0;
- (void)setCustomFirstPageNumber:(BOOL)a0;
- (void)setFitToHeight:(unsigned long long)a0;
- (void)setFitToWidth:(unsigned long long)a0;
- (BOOL)customFirstPageNumber;
- (unsigned long long)firstPageNumber;
- (unsigned long long)fitToHeight;
- (unsigned long long)fitToWidth;

@end
