@class NSMutableArray, NSArray, PKPassBucketTemplate, PKPassColorProfile, PKPass;

@interface PKPassBucketView : UIView {
    NSArray *_fieldViews;
    NSMutableArray *_currentFieldViews;
    long long _background;
}

@property (retain, nonatomic) PKPass *pass;
@property (retain, nonatomic) PKPassColorProfile *colorProfile;
@property (retain, nonatomic) PKPassBucketTemplate *bucketTemplate;
@property (retain, nonatomic) NSArray *bucket;

- (void)layoutSubviews;
- (id)description;
- (void).cxx_destruct;
- (void)_updateSubviews;
- (void)dealloc;
- (void)presentDiff:(id)a0 inView:(id)a1 completion:(id /* block */)a2;
- (long long)_backgroundForBucketTemplate:(id)a0;
- (void)_measureAndFitEvenlySizedSubviews;
- (void)_measureAndFitVariablySizedSubviews;
- (id)_fieldViewsByWidth;
- (void)_presentRecursiveDiff:(id)a0 inView:(id)a1 forSubviewAtIndex:(unsigned long long)a2 withSubviews:(id)a3 completion:(id /* block */)a4;

@end
