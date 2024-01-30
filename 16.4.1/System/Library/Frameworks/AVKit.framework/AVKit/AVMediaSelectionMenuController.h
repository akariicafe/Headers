@class NSArray, UIMenu;
@protocol AVMediaSelectionMenuDelegate;

@interface AVMediaSelectionMenuController : NSObject {
    UIMenu *_audibleOptionsMenu;
    UIMenu *_legibleOptionsMenu;
}

@property (weak, nonatomic) id<AVMediaSelectionMenuDelegate> delegate;
@property (copy, nonatomic) NSArray *audibleOptions;
@property (copy, nonatomic) NSArray *legibleOptions;
@property (nonatomic) unsigned long long currentAudibleOptionIndex;
@property (nonatomic) unsigned long long currentLegibleOptionIndex;
@property (readonly, nonatomic) UIMenu *audibleOptionsMenu;
@property (readonly, nonatomic) UIMenu *legibleOptionsMenu;

- (void).cxx_destruct;
- (id)_menuForOptions:(id)a0 withIdentifier:(id)a1;
- (id)_displayNameForMediaSelectionOption:(id)a0;
- (void)_updateSelectionStateForMenu:(id)a0 selectedIndex:(unsigned long long)a1;
- (id)initWithAudibleOptions:(id)a0 legibleOptions:(id)a1;

@end
