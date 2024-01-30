@class WDSection;

@interface WMSectionMapper : CMMapper {
    WDSection *wdSection;
    float mTopMargin;
    float mLeftMargin;
    BOOL mBreakAtStart;
    BOOL mBreakAtEnd;
    BOOL mIsTitlePage;
}

+ (BOOL)isContentEmpty:(id)a0;

- (float)topMargin;
- (void).cxx_destruct;
- (void)setLeftMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (float)leftMargin;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)initWithWDSection:(id)a0 breakAtStart:(BOOL)a1 breakAtEnd:(BOOL)a2 parent:(id)a3;
- (void)MapSectionStyleAt:(id)a0;
- (void)mapHeaderAt:(id)a0 withState:(id)a1;
- (void)mapFooterAt:(id)a0 withState:(id)a1;

@end
