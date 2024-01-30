@class NSString, CKDetailsAddGroupNameView;

@interface CKDetailsGroupNameCell : CKDetailsCell <CKDetailsCell>

@property (retain, nonatomic) CKDetailsAddGroupNameView *groupNameView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;

@end
