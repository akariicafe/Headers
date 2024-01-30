@class CBBlueLightClient, CBAdaptationClient, BrightnessSystemClient;

@interface CBClient : NSObject {
    BrightnessSystemClient *bsc;
}

@property (readonly) CBBlueLightClient *blueLightClient;
@property (readonly) CBAdaptationClient *adaptationClient;

+ (BOOL)supportsAdaptation;
+ (BOOL)supportsBlueLightReduction;

- (id)init;
- (void)dealloc;

@end
