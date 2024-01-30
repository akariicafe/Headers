@class NSString;

@interface DOCAXIdentifier : NSObject

@property (class, readonly) NSString *itemInfoNavigationRoot;
@property (class, readonly) Class itemInfoView;
@property (class, readonly) NSString *tagEditorContainer;
@property (class, readonly) Class sidebar;
@property (class, readonly) Class viewStyleSelector;
@property (class, readonly) NSString *fullNavBar;
@property (class, readonly) NSString *browsingModeTabBar;
@property (class, readonly) NSString *browsingRoot;
@property (class, readonly) NSString *displayOptionsBar;
@property (class, readonly) NSString *itemCollectionView;
@property (class, readonly) NSString *inlineRenameField;

+ (id)idBase;
+ (id)browsingRootIdentifierForSourceIdentifier:(id)a0;
+ (id)searchMenuButtonShowing:(id)a0;
+ (id)itemCollectionMenuButtonShowing:(id)a0;

@end
