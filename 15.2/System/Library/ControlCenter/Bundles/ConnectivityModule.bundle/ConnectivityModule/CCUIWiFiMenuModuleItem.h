@interface CCUIWiFiMenuModuleItem : CCUIMenuModuleItem

@property (nonatomic, getter=isHotspot) BOOL hotspot;
@property (nonatomic, getter=isSecure) BOOL secure;
@property (nonatomic) unsigned long long signalBars;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
