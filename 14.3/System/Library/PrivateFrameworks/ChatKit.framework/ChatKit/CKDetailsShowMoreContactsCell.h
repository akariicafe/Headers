@class NSString;

@interface CKDetailsShowMoreContactsCell : CKDetailsCell <CKDetailsCell>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;
+ (double)preferredHeight;
+ (BOOL)shouldHighlight;
+ (id)reuseIdentifier;


@end
