@class Device, NSArray, DeviceQuery, LanguageOption;

@interface SetSubtitleStateIntent : INIntent

@property (copy, nonatomic) Device *device;
@property (nonatomic) long long enable;
@property (copy, nonatomic) LanguageOption *language;
@property (copy, nonatomic) NSArray *deviceContext;
@property (nonatomic) long long type;
@property (copy, nonatomic) DeviceQuery *deviceQuery;

@end
