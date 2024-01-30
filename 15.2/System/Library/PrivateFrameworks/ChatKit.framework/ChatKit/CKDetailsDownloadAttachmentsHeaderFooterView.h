@class UITextView, NSString, UIImageView, UIColor, NSLayoutConstraint;
@protocol CKDetailsDownloadAttachmentsHeaderFooterViewDelegate;

@interface CKDetailsDownloadAttachmentsHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView>

@property (retain, nonatomic) UIImageView *iCloudImageView;
@property (retain, nonatomic) UITextView *titleTextView;
@property (retain, nonatomic) UITextView *buttonTextView;
@property (retain, nonatomic) NSLayoutConstraint *titleTextTopToLogoConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleTextTopToViewConstraint;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *buttonText;
@property (weak, nonatomic) id<CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> delegate;
@property (retain, nonatomic) UIColor *downloadButtonTextColor;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (nonatomic) BOOL logoHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

@end
