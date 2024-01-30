@class CNContact, NSString, UILabel, TUConversation, LPLinkView;

@interface CKDetailsExpanseActivityCell : CKDetailsCell <CKDetailsCell>

@property (retain, nonatomic) TUConversation *conversation;
@property (retain, nonatomic) LPLinkView *lpLinkView;
@property (nonatomic) BOOL isScreenShare;
@property (retain, nonatomic) UILabel *activityDescriptionLabel;
@property (retain, nonatomic) CNContact *contactSharingScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;

- (void)layoutSubviews;
- (void)addConstraints;
- (double)interitemSpacing;
- (void)setupView;
- (void).cxx_destruct;
- (void)formatTitle;
- (double)insetPadding;
- (double)buttonInteritemSpacing;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 conversation:(id)a2;

@end
