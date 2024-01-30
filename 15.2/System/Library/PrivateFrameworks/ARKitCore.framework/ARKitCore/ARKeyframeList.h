@class NSString;

@interface ARKeyframeList : NSObject <ARResultData> {
    double _timestamp;
}

@property (readonly, nonatomic) const struct CV3DReconKeyframeList { } *keyframeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)timestamp;
- (void)dealloc;
- (void)setKeyframeList:(struct CV3DReconKeyframeList { } *)a0 timestamp:(double)a1;

@end
