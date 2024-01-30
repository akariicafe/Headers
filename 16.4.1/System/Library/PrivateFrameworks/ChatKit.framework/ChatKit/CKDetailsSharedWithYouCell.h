@class NSString, UISwitch;

@interface CKDetailsSharedWithYouCell : CKDetailsCell <CKDetailsCell>

@property (retain, nonatomic) UISwitch *controlSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (double)estimatedHeight;
+ (BOOL)shouldHighlight;

@end
