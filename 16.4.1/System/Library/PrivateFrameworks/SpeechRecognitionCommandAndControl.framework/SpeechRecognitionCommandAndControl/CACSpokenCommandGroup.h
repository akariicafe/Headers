@class NSString, NSMutableArray;

@interface CACSpokenCommandGroup : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *commandsArray;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) unsigned long long searchScore;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isCustom;
@property (nonatomic) BOOL isConfirmationRequired;

- (BOOL)isGroup;
- (void)saveToPreferences;
- (BOOL)isVisible;
- (void)setLocale:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)cloneWithoutCommands;

@end
