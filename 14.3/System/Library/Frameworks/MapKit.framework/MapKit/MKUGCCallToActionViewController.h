@class NSArray, NSString, NSMutableArray;
@protocol MKUGCCallToActionViewDelegate;

@interface MKUGCCallToActionViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {
    NSMutableArray *_sectionItemViews;
}

@property (weak, nonatomic) id<MKUGCCallToActionViewDelegate> delegate;
@property (retain, nonatomic) NSArray *callToActionAppearances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setCallToActionAppearances:(id)a0 animated:(BOOL)a1;
- (void)_setupCallToActionViewsAnimated:(BOOL)a0;
- (void)_reloadCallToActionViewsAnimated:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;

@end
