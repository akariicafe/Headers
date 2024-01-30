@class NSString, NSMutableDictionary;

@interface TIAssetsForInputMode : NSObject {
    NSMutableDictionary *_assetsByInputModeLevel;
}

@property (readonly, nonatomic) NSString *inputMode;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInputMode:(id)a0;
- (id)recursiveDescription;
- (id)assetContentItemsMatching:(id)a0;
- (void)addAssetsForInputModeLevel:(id)a0;
- (void)removeAllInputModeLevels;

@end
