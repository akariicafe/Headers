@class NSString, UIView;

@interface CKGroupPhotoCell : CKDetailsCell <CKDetailsCell>

@property (retain, nonatomic) UIView *groupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;

@end
