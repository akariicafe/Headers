@class NSMutableDictionary;
@protocol TVTemplateFeaturesManagerDelegate;

@interface TVTemplateFeaturesManager : NSObject {
    NSMutableDictionary *_contextsByFeature;
}

@property (weak, nonatomic) id<TVTemplateFeaturesManagerDelegate> delegate;

+ (id)featuresManagerForAppDocument:(id)a0;

- (void).cxx_destruct;
- (void)popContext:(id)a0 forFeature:(id)a1;
- (void)pushContext:(id)a0 forFeature:(id)a1;
- (id)currentContextForFeature:(id)a0;
- (id)_contextsForFeature:(id)a0;
- (long long)_rankForContext:(id)a0;

@end
