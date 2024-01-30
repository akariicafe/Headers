@interface AXQSMenuHelper : NSObject

@property (nonatomic, getter=isShowingLanguageChoices) BOOL showingLanguageChoices;

+ (id)sharedInstance;

- (void)restoreMenu;

@end
