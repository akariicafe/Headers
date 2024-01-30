@class NSString, MKUGCCallToActionViewAppearance;
@protocol MUDynamicButtonCellModelChangeDelegate;

@interface MUCallToActionItemCellModel : NSObject <MUDynamicButtonCellModel>

@property (retain, nonatomic) MKUGCCallToActionViewAppearance *appearance;
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

+ (id)passiveAddPhotosCallToActionAppearance;
+ (id)passiveRatingsCallToActionAppearance;

- (void).cxx_destruct;
- (void)loadSubtitleWithCompletion:(id /* block */)a0;
- (id)initWithCallToActionViewAppearance:(id)a0;

@end
