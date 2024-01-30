@class NSString;

@interface CKDetailsShowMoreContactsCell : CKDetailsCell <CKDetailsCell>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (double)preferredHeight;
+ (BOOL)shouldHighlight;
+ (Class)cellClass;


@end
