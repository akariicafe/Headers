@class NSString;

@interface TCMPSRandomPadAugmenter : NSObject <TCMPSImageAugmenting>

@property (nonatomic) double skipProbability;
@property (nonatomic) double minAspectRatio;
@property (nonatomic) double maxAspectRatio;
@property (nonatomic) double minAreaFraction;
@property (nonatomic) double maxAreaFraction;
@property (nonatomic) unsigned long long maxAttempts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)imageAugmentedFromImage:(id)a0 generator:(id /* block */)a1;

@end
