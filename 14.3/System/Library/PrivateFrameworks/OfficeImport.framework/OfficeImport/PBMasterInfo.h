@class NSMutableDictionary, NSDictionary, PDSlideMaster, NSMutableArray;

@interface PBMasterInfo : NSObject {
    PDSlideMaster *mSlideMaster;
    NSMutableArray *mTgtSlideLayoutArray;
    unsigned int mMainPbRef;
    unsigned int mTitlePbRef;
    NSDictionary *mLayoutMap;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo *x0; struct PBReaderMasterStyleInfo *x1; struct __compressed_pair<PBReaderMasterStyleInfo *, ChAllocator<PBReaderMasterStyleInfo> > { struct PBReaderMasterStyleInfo *x0; } x2; } *mSrcTextStyling;
    NSMutableDictionary *mXmlLayoutMap;
}

@property (nonatomic) unsigned int xmlMainMasterId;
@property (nonatomic) BOOL useXmlBlobs;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)slideMaster;
- (id)slideLayoutForXmlLayoutId:(unsigned short)a0;
- (id)uniqueXmlSlideLayout;
- (void)setSlideMaster:(id)a0;
- (void)setMainPbRef:(unsigned int)a0;
- (unsigned int)mainPbRef;
- (void)setTitlePbRef:(unsigned int)a0;
- (unsigned int)titlePbRef;
- (void)cacheTargetLayoutType:(int)a0;
- (id)allTargetLayoutTypes;
- (void)cacheSlideLayouts;
- (id)slideLayoutForSlideHolder:(id)a0;
- (struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo *x0; struct PBReaderMasterStyleInfo *x1; struct __compressed_pair<PBReaderMasterStyleInfo *, ChAllocator<PBReaderMasterStyleInfo> > { struct PBReaderMasterStyleInfo *x0; } x2; } *)sourceTextStyling;
- (void)setSlideLayout:(id)a0 forXmlLayoutId:(unsigned short)a1;

@end
