@class PDSlide;

@interface PBSlideObjAndMasterPair : NSObject {
    PDSlide *mSlide;
    int mMasterId;
}

+ (id)createPair:(id)a0 masterId:(int)a1;

- (void).cxx_destruct;
- (id)slide;
- (void)setSlide:(id)a0 masterId:(int)a1;
- (int)masterId;

@end
