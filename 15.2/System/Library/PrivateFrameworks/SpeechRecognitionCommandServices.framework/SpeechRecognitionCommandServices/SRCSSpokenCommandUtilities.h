@class NSDictionary, NSMutableDictionary;

@interface SRCSSpokenCommandUtilities : NSObject {
    NSDictionary *_commandAttributes;
    NSMutableDictionary *_commandStringsTablesByLocaleIdentifier;
}

+ (id)sharedSpokenCommandUtilities;

- (void).cxx_destruct;
- (id)init;
- (id)commandStringsTableForLocaleIdentifier:(id)a0;
- (void)_flushBuiltInCommandsStringsTable;
- (id)commandAttributes;
- (id)dictionaryForLocaleIdentifier:(id)a0 resourceFileName:(id)a1 resourceFileExtension:(id)a2;

@end
