@class PDAnimationInfoData, PDMediaNode;

@interface PDAnimationInfo : NSObject {
    PDAnimationInfoData *mEntrance;
    PDAnimationInfoData *mExit;
}

@property (retain, nonatomic) PDAnimationInfoData *mediaData;
@property (retain, nonatomic) PDMediaNode *mediaNode;

- (id)description;
- (void).cxx_destruct;
- (void)setEntranceData:(id)a0;
- (id)entranceData;
- (void)setExitData:(id)a0;
- (id)exitData;

@end
