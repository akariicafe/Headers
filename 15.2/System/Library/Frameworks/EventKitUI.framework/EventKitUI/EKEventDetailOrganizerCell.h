@class NSString, EKUILabeledAvatarView, UILabel;
@protocol EKIdentityProtocol;

@interface EKEventDetailOrganizerCell : EKEventDetailCell {
    NSString *_organizerName;
    EKUILabeledAvatarView *_organizerView;
    UILabel *_organizerLabel;
    UILabel *_titleView;
    id<EKIdentityProtocol> _organizerOverride;
}

@property (nonatomic) BOOL hideDisclosureIndicator;

+ (id)_titleFont;
+ (id)_organizerFont;

- (void)_updateDisclosureIndicator;
- (BOOL)update;
- (void).cxx_destruct;
- (id)_titleView;
- (BOOL)shouldDisplayForEvent;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 organizerOverride:(id)a2;
- (id)_organizerView;
- (id)_organizerLabel;

@end
