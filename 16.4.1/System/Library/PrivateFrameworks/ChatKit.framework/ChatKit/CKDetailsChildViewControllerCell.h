@class NSString, UIView;

@interface CKDetailsChildViewControllerCell : CKDetailsCell <CKDetailsCell>

@property (retain, nonatomic) UIView *childViewControllerView;
@property (nonatomic) BOOL shouldUseLayoutMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;

@end
