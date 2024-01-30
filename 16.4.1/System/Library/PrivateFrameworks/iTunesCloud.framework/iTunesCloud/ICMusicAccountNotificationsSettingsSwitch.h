@class NSString, NSDictionary, NSMutableDictionary;

@interface ICMusicAccountNotificationsSettingsSwitch : NSObject {
    NSMutableDictionary *_valueDictionary;
    BOOL _isToggled;
    BOOL _hasBeenPreviouslyToggled;
}

@property (nonatomic) BOOL isToggled;
@property (readonly, nonatomic) BOOL hasBeenPreviouslyToggled;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *itemResponseDictionary;

- (id)initWithItemResponseDictionary:(id)a0;
- (id)initWithToggleState:(BOOL)a0 hasBeenToggled:(BOOL)a1 identifier:(id)a2;
- (void).cxx_destruct;
- (void)setHasBeenPreviouslyToggled:(BOOL)a0;

@end
