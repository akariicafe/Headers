@class NSString, MKPlaceCardActionItem;
@protocol MUDynamicButtonCellModelChangeDelegate;

@interface MUActionItemCellModel : NSObject <MUDynamicButtonCellModel> {
    MKPlaceCardActionItem *_actionItem;
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

- (void)_registerObserver;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)loadSubtitleWithCompletion:(id /* block */)a0;
- (id)initWithActionItem:(id)a0;
- (id)_resolvedActionItem;

@end
