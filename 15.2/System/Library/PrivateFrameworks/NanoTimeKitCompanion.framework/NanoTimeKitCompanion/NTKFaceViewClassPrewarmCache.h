@class NSMutableDictionary;

@interface NTKFaceViewClassPrewarmCache : NSObject {
    NSMutableDictionary *_prewarmCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)prewarmDataForClass:(Class)a0;
- (void)prewarmClasses:(id)a0;

@end
