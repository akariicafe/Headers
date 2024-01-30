@class NSMutableArray;

@interface HUIHeadphoneLevelGroup : UIView

@property (retain, nonatomic) NSMutableArray *inactiveLevels;
@property (retain, nonatomic) NSMutableArray *levels;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) unsigned long long pipFlagIndex;

- (void)dealloc;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)layoutLevels;
- (void)updateWithExposure:(double)a0 withThreshold:(unsigned long long)a1;

@end
