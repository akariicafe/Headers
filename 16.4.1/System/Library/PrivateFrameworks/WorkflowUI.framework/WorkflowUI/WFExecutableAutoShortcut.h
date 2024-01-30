@class NSString;

@interface WFExecutableAutoShortcut : NSObject

@property (nonatomic, readonly) NSString *triggerPhrase;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ underlyingAutoShortcut;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ phrase;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ chicletColor;
@property (nonatomic, readonly) NSString *id;

- (id)init;
- (void).cxx_destruct;

@end
