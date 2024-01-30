@class NSString, NSArray;

@interface PUITCCAccessController : PSListController

@property (copy, nonatomic) NSString *clipsFooter;
@property (nonatomic) BOOL supportsClips;
@property (nonatomic) unsigned long long appType;
@property (retain, nonatomic) NSString *appGroupHeader;
@property (retain, nonatomic) NSArray *appSpecifiers;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) NSString *serviceKey;

+ (BOOL)isServiceRestricted:(id)a0;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setAccess:(id)a0 forSpecifier:(id)a1;
- (id)accesssForSpecifier:(id)a0;
- (void)updateSpecifiersForImposedSettings;

@end
