@class NSString, GEOQuickLink, UIMenu;
@protocol MUDynamicButtonCellModelChangeDelegate;

@interface MUQuickLinkButtonCellModel : NSObject <MUDynamicButtonCellModel> {
    NSString *_cachedSubtitle;
    BOOL _didLoad;
    GEOQuickLink *_quickLink;
}

@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *symbolName;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long actionStyle;
@property (weak, nonatomic) id<MUDynamicButtonCellModelChangeDelegate> changeDelegate;
@property (copy, nonatomic) UIMenu *menu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQuickLink:(id)a0;
- (void)_completeWithSubtitle:(id)a0 completion:(id /* block */)a1;
- (void)_loadAppClipWithCompletion:(id /* block */)a0;
- (void)_loadQuickLinkWithCompletion:(id /* block */)a0;
- (id)accessibilityIdentifierForAction;
- (int)analyticAction;
- (void)loadSubtitleWithCompletion:(id /* block */)a0;

@end
