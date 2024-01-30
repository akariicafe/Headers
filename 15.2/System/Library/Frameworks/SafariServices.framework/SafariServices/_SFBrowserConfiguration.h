@protocol UITraitEnvironment;

@interface _SFBrowserConfiguration : NSObject {
    long long _configuration;
}

@property (readonly, nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled;
@property (readonly, weak, nonatomic) id<UITraitEnvironment> traitEnvironment;
@property (readonly, nonatomic, getter=isControlledByAutomation) BOOL controlledByAutomation;
@property (readonly, nonatomic) BOOL allowsKeyboardCorrectionLearning;
@property (readonly, nonatomic) BOOL allowsRestoringEducationTabs;
@property (readonly, nonatomic) BOOL allowsSearchSuggestions;
@property (readonly, nonatomic) BOOL allowsSiteSpecificSearch;
@property (readonly, nonatomic) BOOL allowsSpeculativeLoading;
@property (readonly, nonatomic) BOOL allowsStreamlinedLogin;
@property (readonly, nonatomic) BOOL allowsUserActivityFeedback;
@property (readonly, nonatomic) BOOL usesPersistentDataStore;
@property (readonly, nonatomic) BOOL allowsSearchFeedback;
@property (readonly, nonatomic) BOOL allowsClosingLastTab;
@property (readonly, nonatomic) BOOL allowsPersistingTabState;
@property (readonly, nonatomic) BOOL allowsReopeningClosedTabs;
@property (readonly, nonatomic) long long barTintStyle;
@property (readonly, nonatomic) BOOL usesDarkTheme;

- (id)initWithPrivateBrowsingEnabled:(BOOL)a0 traitEnvironment:(id)a1 controlledByAutomation:(BOOL)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
