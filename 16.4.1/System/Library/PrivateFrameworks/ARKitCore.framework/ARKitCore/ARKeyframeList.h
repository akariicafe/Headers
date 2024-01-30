@class NSSet, NSString;

@interface ARKeyframeList : NSObject <ARResultData> {
    double _timestamp;
}

@property (retain) NSSet *updatedAnchors;
@property (retain) NSSet *removedAnchors;
@property (readonly, nonatomic) const struct CV3DReconKeyframeList { } *keyframeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
