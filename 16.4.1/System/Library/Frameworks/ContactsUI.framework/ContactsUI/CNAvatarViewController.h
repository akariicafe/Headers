@class CNContactStore, NSString, NSArray, UIView;
@protocol CNAvatarViewControllerDelegate, CNUIObjectViewControllerDelegate, CNUIPRLikenessResolver;

@interface CNAvatarViewController : UIViewController <CNAvatarViewController_Private, CNAvatarViewController>

@property (readonly, nonatomic) id<CNUIPRLikenessResolver> likenessResolver;
@property (nonatomic) BOOL allowStaleRendering;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled;
@property (weak, nonatomic) id<CNAvatarViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

+ (Class)defaultImplementation;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)a0;

@end
