@class NSMutableDictionary;

@interface UIDictationCommandHandlerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *commandHandlers;

+ (id)sharedInstance;
+ (id)commandHandlerWithLocale:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_commandHandlerWithLocale:(id)a0;

@end
