@class NSDictionary, NSMutableDictionary;

@interface SRCSSpokenCommandUtilities : NSObject {
    NSDictionary *_commandAttributes;
    NSMutableDictionary *_commandStringsTablesByLocaleIdentifier;
}

+ (id)sharedSpokenCommandUtilities;

- (id)init;
- (void).cxx_destruct;
- (id)commandStringsTableForLocaleIdentifier:(id)a0;
- (void)_flushBuiltInCommandsStringsTable;
- (id)commandAttributes;

@end
