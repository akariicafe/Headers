@class NSMutableDictionary, NSDictionary, PDSlideMaster, NSMutableArray;

@interface PBMasterInfo : NSObject {
    PDSlideMaster *mSlideMaster;
    NSMutableArray *mTgtSlideLayoutArray;
    unsigned int mMainPbRef;
    unsigned int mTitlePbRef;
    NSDictionary *mLayoutMap;
    void *mSrcTextStyling;
    NSMutableDictionary *mXmlLayoutMap;
}

@property (nonatomic) unsigned int xmlMainMasterId;
@property (nonatomic) BOOL useXmlBlobs;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setSlideMaster:(id)a0;
- (id)allTargetLayoutTypes;
- (void)cacheSlideLayouts;
- (void)cacheTargetLayoutType:(int)a0;
- (unsigned int)mainPbRef;
- (void)setMainPbRef:(unsigned int)a0;
- (void)setSlideLayout:(id)a0 forXmlLayoutId:(unsigned short)a1;
- (void)setTitlePbRef:(unsigned int)a0;
- (id)slideLayoutForSlideHolder:(id)a0;
- (id)slideLayoutForXmlLayoutId:(unsigned short)a0;
- (id)slideMaster;
- (void *)sourceTextStyling;
- (unsigned int)titlePbRef;
- (id)uniqueXmlSlideLayout;

@end
