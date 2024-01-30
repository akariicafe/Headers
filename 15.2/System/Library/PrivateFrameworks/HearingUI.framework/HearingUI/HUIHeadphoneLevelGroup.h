@class NSMutableArray;

@interface HUIHeadphoneLevelGroup : UIView

@property (retain, nonatomic) NSMutableArray *inactiveLevels;
@property (retain, nonatomic) NSMutableArray *levels;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) unsigned long long pipFlagIndex;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)layoutLevels;
- (void)updateWithExposure:(double)a0 withThreshold:(unsigned long long)a1;

@end
