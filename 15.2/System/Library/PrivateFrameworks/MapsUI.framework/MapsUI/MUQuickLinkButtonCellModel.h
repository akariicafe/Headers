@class NSString, GEOQuickLink;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQuickLink:(id)a0;
- (void).cxx_destruct;
- (void)loadSubtitleWithCompletion:(id /* block */)a0;
- (int)analyticAction;
- (void)_completeWithSubtitle:(id)a0 completion:(id /* block */)a1;
- (void)_loadQuickLinkWithCompletion:(id /* block */)a0;
- (void)_loadAppClipWithCompletion:(id /* block */)a0;

@end
