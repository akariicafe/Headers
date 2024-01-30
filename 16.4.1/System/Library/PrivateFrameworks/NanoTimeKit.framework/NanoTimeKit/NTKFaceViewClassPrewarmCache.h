@class NSMutableDictionary;

@interface NTKFaceViewClassPrewarmCache : NSObject {
    NSMutableDictionary *_prewarmCache;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)prewarmClasses:(id)a0;
- (id)prewarmDataForClass:(Class)a0;

@end
