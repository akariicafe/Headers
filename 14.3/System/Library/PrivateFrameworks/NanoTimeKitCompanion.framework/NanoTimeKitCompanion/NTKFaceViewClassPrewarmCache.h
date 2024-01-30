@class NSMutableDictionary;

@interface NTKFaceViewClassPrewarmCache : NSObject {
    NSMutableDictionary *_prewarmCache;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)prewarmDataForClass:(Class)a0;
- (void)prewarmClasses:(id)a0;

@end
