@class NSString, NSArray, NSURL, UIBarButtonItemGroup, UIImage, UISearchTextField;

@interface _UINavigationBarNSToolbarLayout : NSObject <NSCopying>

@property (nonatomic) long long style;
@property (nonatomic) long long location;
@property (copy, nonatomic) NSString *customizationIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *representedURL;
@property (copy, nonatomic) id /* block */ representedDragItemsProvider;
@property (copy, nonatomic) NSArray *leadingGroups;
@property (copy, nonatomic) NSArray *centerGroups;
@property (copy, nonatomic) NSArray *trailingGroups;
@property (retain, nonatomic) UIBarButtonItemGroup *pinnedTrailingGroup;
@property (nonatomic) BOOL showSidebarToggle;
@property (copy, nonatomic) NSString *backButtonTitle;
@property (retain, nonatomic) UIImage *backButtonImage;
@property (copy, nonatomic) id /* block */ backButtonHandler;
@property (retain, nonatomic) UISearchTextField *inlineSearchTextField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithLayout:(id)a0;

@end
