@class NSDictionary;

@interface VCSessionBitrateArbiter : NSObject {
    NSDictionary *_currentSettings;
}

@property (readonly) unsigned int maxBitrate2GUplink;
@property (readonly) unsigned int maxBitrate3GUplink;
@property (readonly) unsigned int maxBitrateExpensiveUplink;
@property (readonly) unsigned int maxBitrateNonExpensiveUplink;
@property (readonly) unsigned int maxBitrateWiFiUplink;
@property (readonly) unsigned int maxBitrate2GDownlink;
@property (readonly) unsigned int maxBitrate3GDownlink;
@property (readonly) unsigned int maxBitrateExpensiveDownlink;
@property (readonly) unsigned int maxBitrateNonExpensiveDownlink;
@property (readonly) unsigned int maxBitrateWiFiDownlink;

- (id)init;
- (void)dealloc;
- (void)readHardwareValues;
- (void)readStoreBagValues;
- (BOOL)rangeCheck:(unsigned int)a0;
- (unsigned int)bitrateForStoreBagKey:(id)a0 connectionType:(int)a1 currentBitrate:(unsigned int)a2 isExpensive:(BOOL)a3;

@end
