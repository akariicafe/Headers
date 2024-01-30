@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PIGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

@property (class) BOOL falseColorHDR;

@property (nonatomic) BOOL forceGlassesMatteOff;
@property (nonatomic) BOOL forceSpillMatteOff;
@property (nonatomic) BOOL allowSpillMatteOnOlderPortraitV2Captures;

+ (id)globalSettings;
+ (id)IPXEditSettings;
+ (id)PUEditSettings;
+ (id)editSettings;

- (void).cxx_destruct;
- (id)init;
- (id)decoratorRenderFiltersForImages;
- (id)decoratorRenderFiltersForVideos;

@end
