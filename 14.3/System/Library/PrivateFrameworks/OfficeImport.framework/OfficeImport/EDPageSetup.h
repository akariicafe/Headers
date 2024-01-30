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

- (unsigned long long)scale;
- (id)init;
- (void)setOrder:(int)a0;
- (void)setLeftMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (void)setBottomMargin:(float)a0;
- (int)orientation;
- (id)description;
- (float)rightMargin;
- (void)setScale:(unsigned long long)a0;
- (float)topMargin;
- (void)setOrientation:(int)a0;
- (float)bottomMargin;
- (void)setRightMargin:(float)a0;
- (int)order;
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
