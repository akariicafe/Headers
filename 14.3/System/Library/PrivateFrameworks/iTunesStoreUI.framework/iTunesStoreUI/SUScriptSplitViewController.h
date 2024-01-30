@class SUScriptViewController, NSNumber, NSString;

@interface SUScriptSplitViewController : SUScriptViewController

@property (retain) SUScriptViewController *firstViewController;
@property (retain) id minimumPaneSize;
@property (retain) SUScriptViewController *secondViewController;
@property (retain) id splitPosition;
@property (retain) id splitShadowColor;
@property (retain) NSNumber *splitShadowOpacity;
@property (retain) NSNumber *splitShadowRadius;
@property (retain) NSString *splitType;
@property (retain) NSString *title;
@property BOOL usesSharedPlaceholder;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)attributeKeys;
- (id)_splitViewController;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;

@end
