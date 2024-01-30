@interface AKFeatureManager : NSObject {
    BOOL _cachedIsLisbonAvailable;
}

@property (readonly, nonatomic, getter=isLisbonAvailable) BOOL lisbonAvailable;

+ (id)sharedManager;

- (id)init;

@end
