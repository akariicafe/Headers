@class NSSet;

@interface MNAudioOutputSetting : NSObject <NSSecureCoding> {
    NSSet *_pickableRoutes;
    BOOL _selected;
    BOOL _hfpPreference;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL selectedForSystem;
@property (readonly, nonatomic) BOOL hfpPreference;

+ (BOOL)isBluetoothRoute:(id)a0;
+ (id)macAddressForRoute:(id)a0;

- (id)routeUID;
- (id)macAddress;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isPicked;
- (id)description;
- (void)setPicked:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPickableRoutes:(id)a0;
- (id)pickableRouteForHFPPreference:(BOOL)a0;
- (BOOL)settingForBluetoothDevice;
- (BOOL)_isHFPRoute:(id)a0;
- (BOOL)selectedForRouteSelection:(unsigned long long)a0;
- (BOOL)settingForBluetoothComboDevice;
- (BOOL)settingSupportsBluetoothHFP;
- (BOOL)_isPicked:(id)a0;
- (BOOL)_pickRoute:(id)a0;
- (void)setHfpPreference:(BOOL)a0;
- (void)setSelected:(BOOL)a0 shouldSetHFPPreference:(BOOL)a1;
- (id)initWithPickableRoute:(id)a0;
- (BOOL)containsPickableRoute:(id)a0;
- (BOOL)isEqualToSetting:(id)a0;
- (BOOL)settingForDefaultRoute;
- (BOOL)allowHFPPreferenceSelectionForRouteSelection:(unsigned long long)a0;
- (BOOL)pickedStateConsistentWithHFPPreference;

@end
