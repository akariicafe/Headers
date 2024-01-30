@class Device, NSArray, DeviceQuery, LanguageOption;

@interface SetAudioLanguageIntent : INIntent

@property (copy, nonatomic) Device *device;
@property (copy, nonatomic) LanguageOption *language;
@property (copy, nonatomic) NSArray *deviceContext;
@property (copy, nonatomic) DeviceQuery *deviceQuery;

@end
