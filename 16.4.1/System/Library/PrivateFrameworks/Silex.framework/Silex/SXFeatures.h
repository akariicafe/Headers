@class NSString;

@interface SXFeatures : NSObject <SXFeatures>

@property (readonly, nonatomic) BOOL newAdsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNewAdsEnabled:(BOOL)a0;

@end
