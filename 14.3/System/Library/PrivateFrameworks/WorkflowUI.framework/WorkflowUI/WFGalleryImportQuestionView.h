@class NSString, WFImportQuestionViewController;
@protocol WFGalleryImportQuestionViewDelegate;

@interface WFGalleryImportQuestionView : UIView <WFImportQuestionViewControllerDelegate>

@property (retain, nonatomic) WFImportQuestionViewController *importQuestionViewController;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (weak, nonatomic) id<WFGalleryImportQuestionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
