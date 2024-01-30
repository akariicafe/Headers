@class NSString, SearchUIDetailedRowModel, UIView;
@protocol SearchUIFeedbackDelegate, SearchUIAccessoryViewDelegate;

@interface SearchUIAccessoryViewController : NSObject <SearchUIDetailedRowComponent>

@property (retain, nonatomic) UIView *view;
@property (weak) id<SearchUIAccessoryViewDelegate> delegate;
@property (readonly) unsigned long long type;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRowModel:(id)a0;
+ (Class)accessoryViewClassForRowModel:(id)a0;

- (void)updateWithContacts:(id)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (id)setupView;
- (void).cxx_destruct;
- (id)init;
- (void)hide;
- (void)buttonPressed;
- (BOOL)shouldVerticallyCenter;
- (void)didEngageAction:(unsigned long long)a0 destination:(unsigned long long)a1;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;
- (id)controlInView:(id)a0;

@end
