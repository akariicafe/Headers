@class NSString, NSMutableDictionary, NSDictionary, NSDate, NSMutableArray;

@interface IMTunesController : NSObject {
    NSDate *_lastChange;
    NSDictionary *_lastInfo;
    NSMutableArray *_listeners;
    NSString *_messageFormat;
}

@property (nonatomic) NSMutableDictionary *playerInfo;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) NSString *messageFormat;

+ (id)sharedTunesController;

- (id)init;
- (void)dealloc;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)_updateMessage;
- (void)_playerChanged:(id)a0;
- (void)_playerChangedNotification:(id)a0;

@end
