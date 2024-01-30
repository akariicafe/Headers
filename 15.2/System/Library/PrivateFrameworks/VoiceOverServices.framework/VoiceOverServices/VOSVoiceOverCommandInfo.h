@class NSDictionary;

@interface VOSVoiceOverCommandInfo : NSObject {
    NSDictionary *_brailleCommands;
}

- (id)localizedNameForCategory:(id)a0;
- (void).cxx_destruct;
- (void)_loadBrailleCommandsIfNecessary;
- (id)brailleVoiceOverCategories;
- (id)brailleCommandsForCategory:(id)a0;
- (id)localizedNameForCommand:(id)a0;

@end
