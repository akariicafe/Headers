@interface AVKitGlobalSettings : NSObject

@property (nonatomic) BOOL secondGenerationPlayerEnabled;
@property (readonly, nonatomic) BOOL playbackSpeedControlEnabled;
@property (readonly, nonatomic) BOOL visualAnalysisEnabled;
@property (readonly, nonatomic) BOOL visualAnalysisSupported;
@property (readonly, nonatomic) BOOL isQuickLook;

+ (id)shared;
+ (BOOL)_isQuickLook;

- (id)init;

@end
