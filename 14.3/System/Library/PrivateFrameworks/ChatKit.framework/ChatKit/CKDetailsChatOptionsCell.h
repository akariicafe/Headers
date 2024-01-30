@class NSString, UISwitch;

@interface CKDetailsChatOptionsCell : CKDetailsCell <CKDetailsCell>

@property (retain, nonatomic) UISwitch *controlSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeight;
+ (BOOL)shouldHighlight;
+ (double)estimatedHeight;
+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
