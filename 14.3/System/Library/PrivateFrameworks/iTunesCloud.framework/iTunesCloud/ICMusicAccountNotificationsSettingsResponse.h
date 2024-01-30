@class NSArray, NSDictionary;

@interface ICMusicAccountNotificationsSettingsResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) NSArray *settingsSwitches;
@property (readonly, nonatomic) BOOL wasSuccessful;

+ (id)createResponseBodyWithSwitches:(id)a0;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;

@end
