@class NSArray;

@interface UIAccessibilityElementTraversalOptions : NSObject

@property (nonatomic) BOOL forSpeakScreen;
@property (nonatomic) BOOL shouldIncludeStatusBarWindow;
@property (copy, nonatomic) id /* block */ alternateViewChildrenHandler;
@property (nonatomic) BOOL shouldReturnScannerGroups;
@property (nonatomic) long long direction;
@property (copy, nonatomic) id /* block */ leafNodePredicate;
@property (nonatomic) BOOL shouldOnlyIncludeElementsWithVisibleFrame;
@property (nonatomic) BOOL shouldIncludeKeyboardObscuredElements;
@property (nonatomic) BOOL shouldUseAllSubviews;
@property (nonatomic) BOOL includeHiddenViews;
@property (nonatomic) BOOL includeWindowlessViews;
@property (nonatomic) BOOL sorted;
@property (nonatomic) BOOL includeAncestorsOfSelfInSiblingMatch;
@property (retain, nonatomic) NSArray *allowedViewsForTraversal;

+ (id)defaultVoiceOverOptions;
+ (id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(BOOL)a0 honorsGroups:(BOOL)a1;
+ (id)defaultMacCatalystPlatformOptions;
+ (id)defaultSwitchControlOptions;
+ (id)defaultSpeakScreenOptions;
+ (id)options;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
