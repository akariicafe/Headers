@class NSArray, NSString, AXReplayableGesture, NSMutableDictionary, CACRecordedUserActionFlow;

@interface CACSpokenCommandItem : CACSpokenCommandGroup {
    NSMutableDictionary *_customDictionary;
}

@property (retain, nonatomic) NSArray *searchAlternates;
@property (retain, nonatomic) NSString *customScope;
@property (retain, nonatomic) NSString *customAppName;
@property (retain, nonatomic) AXReplayableGesture *customGesture;
@property (retain, nonatomic) CACRecordedUserActionFlow *customUserActionFlow;
@property (retain, nonatomic) NSString *customTextToInsert;
@property (retain, nonatomic) NSString *customType;
@property (retain, nonatomic) NSArray *customPasteBoard;
@property (retain, nonatomic) NSString *customShortcutsWorkflowIdentifier;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *untranslatedDisplayString;
@property (retain, nonatomic) NSString *untranslatedLocale;
@property (retain, nonatomic) id commandInfo;
@property (nonatomic) BOOL isEdited;
@property (nonatomic) BOOL isCollapsed;

+ (id)newCommandItemWithLocale:(id)a0 scope:(id)a1;

- (id)initWithIdentifier:(id)a0;
- (void)setIsEnabled:(BOOL)a0;
- (BOOL)isVisible;
- (void)setDisplayString:(id)a0;
- (BOOL)isGroup;
- (void)removeFromPreferences;
- (id)displayString;
- (id)description;
- (void).cxx_destruct;
- (void)saveToPreferences;
- (id)copy;
- (BOOL)conflictsWithItem:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1 locale:(id)a2;
- (id)initWithIdentifier:(id)a0 properties:(id)a1 locale:(id)a2;
- (void)_reloadFromProperties:(id)a0;
- (id)cloneWithoutCommands;
- (id)commandsArray;
- (void)setIsConfirmationRequired:(BOOL)a0;
- (void)_updateBuiltInCommandsWithLocale:(id)a0;
- (void)_saveKey:(id)a0 toDictionary:(id)a1;
- (id)dictionaryForSavingToPreferences;
- (void)_setCustomCommandStrings:(id)a0 withLocale:(id)a1;
- (id)_customCommandStringsWithLocale:(id)a0;
- (id)untranslatedDisplayStringAndLocale:(id *)a0;
- (BOOL)evaluateCommandPredicate:(id)a0;
- (id)primaryBuiltinCommandForLocale:(id)a0;
- (void)refreshDataFromPreferences;
- (id)valueForKey:(id)a0 locale:(id)a1;
- (id)sortString;

@end
