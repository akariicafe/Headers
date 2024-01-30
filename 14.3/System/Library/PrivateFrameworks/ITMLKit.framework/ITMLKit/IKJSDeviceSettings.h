@class NSString, IKJSRestrictions;
@protocol IKAppDeviceConfig;

@interface IKJSDeviceSettings : IKJSObject <NSObject, IKJSDeviceSettings, _IKJSDeviceSettingsProxy, _IKJSDeviceSettings> {
    id _restrictionDidChangeToken;
}

@property (weak, nonatomic) id<IKAppDeviceConfig> deviceConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain, nonatomic) NSString *language;
@property (readonly, retain, nonatomic) NSString *storefrontCountryCode;
@property (readonly, nonatomic) IKJSRestrictions *restrictions;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSString *preferredVideoFormat;
@property (readonly, retain, nonatomic) NSString *preferredVideoPreviewFormat;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } Screen;
@property (readonly, nonatomic) IKJSRestrictions *Restrictions;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } screen;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_formatStringForVideoFormat:(unsigned long long)a0;
- (id)initWithAppContext:(id)a0 deviceConfig:(id)a1;
- (void)_restrictionsDidChangeNotification:(id)a0;
- (id)asPrivateIKJSDeviceSettings;

@end
