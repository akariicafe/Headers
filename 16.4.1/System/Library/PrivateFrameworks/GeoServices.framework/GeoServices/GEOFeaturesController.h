@class NSArray, NSString;
@protocol GEOFeaturesControllerDelegate;

@interface GEOFeaturesController : NSObject <GEOConfigChangeListenerDelegate>

@property (retain, nonatomic) NSArray *features;
@property (weak, nonatomic) id<GEOFeaturesControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_initializeFeatures;

@end
