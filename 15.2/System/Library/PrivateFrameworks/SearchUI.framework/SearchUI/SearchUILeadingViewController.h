@class NSString, SearchUIDetailedRowModel, UIView;
@protocol SearchUIFeedbackDelegate;

@interface SearchUILeadingViewController : NSObject <SearchUIDetailedRowComponent>

@property (readonly) unsigned long long type;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) BOOL usesCompactWidth;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRowModel:(id)a0;
+ (Class)leadingViewClassForRowModel:(id)a0;

- (void)updateWithContacts:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (id)setupView;
- (void).cxx_destruct;
- (id)init;
- (void)hide;
- (id)imageView;
- (BOOL)shouldVerticallyCenter;

@end
