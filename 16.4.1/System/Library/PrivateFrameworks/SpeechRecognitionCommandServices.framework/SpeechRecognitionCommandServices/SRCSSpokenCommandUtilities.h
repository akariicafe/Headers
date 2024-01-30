@class NSDictionary, NSMutableDictionary;

@interface SRCSSpokenCommandUtilities : NSObject {
    NSDictionary *_commandAttributes;
    NSMutableDictionary *_commandStringsTablesByLocaleIdentifier;
}

+ (id)sharedSpokenCommandUtilities;
+ (struct __CFStringTokenizer { } *)wordUnitStringTokenizerRefForLocaleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_flushBuiltInCommandsStringsTable;
- (id)commandStringsTableForLocaleIdentifier:(id)a0;
- (id)dictionaryForLocaleIdentifier:(id)a0 bundle:(id)a1 subDirectory:(id)a2 rootFileName:(id)a3 rootFileExtension:(id)a4;
- (id)dictionaryForLocaleIdentifier:(id)a0 resourceFileName:(id)a1 resourceFileExtension:(id)a2;
- (id)commandAttributes;
- (id)dictionaryForLocaleIdentifier:(id)a0 bundle:(id)a1 resourceFileName:(id)a2 resourceFileExtension:(id)a3;

@end
