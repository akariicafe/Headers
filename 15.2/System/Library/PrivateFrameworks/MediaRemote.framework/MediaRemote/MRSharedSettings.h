@interface MRSharedSettings : NSObject

@property (class, readonly, nonatomic) MRSharedSettings *currentSettings;

@property (readonly, nonatomic, getter=isMultiplayerAware) BOOL multiplayerAware;
@property (readonly, nonatomic, getter=isMultiplayerHost) BOOL multiplayerHost;
@property (readonly, nonatomic) BOOL canHostMultiplayerStream;

@end
