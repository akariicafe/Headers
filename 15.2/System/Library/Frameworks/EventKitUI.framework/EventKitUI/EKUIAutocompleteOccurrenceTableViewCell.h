@class UIColor, NSArray, UIImageView, NSString, UILabel, NSAttributedString;

@interface EKUIAutocompleteOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts {
    UIImageView *_colorDotView;
    UILabel *_titleTextLabel;
    UILabel *_locationTextLabel;
    UILabel *_timeTextLabelWithThisTimeZone;
    UILabel *_timeTextLabelWithResultTimeZone;
    UILabel *_inviteesTextLabel;
    UILabel *_foundInTextLabel;
    NSArray *_secondaryLabels;
    UIColor *_eventCalendarColor;
    NSString *_eventTitle;
    NSAttributedString *_eventLocation;
    NSString *_eventTimeWithThisTimeZone;
    NSString *_eventTimeWithResultTimeZone;
    NSString *_eventInvitees;
    NSString *_eventFoundIn;
    NSArray *_ekUIAutocompleteOccurrenceTableViewCellConstraints;
}

+ (id)primaryTextColor;
+ (id)secondaryTextColor;
+ (id)reuseIdentifier;
+ (double)cellHeightForResult:(id)a0 forWidth:(double)a1;
+ (id)secondaryTextLabelFont;
+ (double)_verticalSpacingTopToBaselineForTopLabelWithPrimaryFont:(id)a0;
+ (double)_verticalSpacingTopToBaselineForBottomLabelWithSecondaryFont:(id)a0;
+ (double)_verticalSpacingBottomToBaselineForBottomLabelWithPrimaryFont:(id)a0;
+ (id)_titleStringForResult:(id)a0;
+ (id)_locationStringForResult:(id)a0;
+ (id)_timeStringForResult:(id)a0 usingTimeZone:(id)a1;
+ (BOOL)_shouldShowOtherTimeZoneForResult:(id)a0;
+ (id)_inviteeStringForResult:(id)a0;
+ (id)_foundInStringForResult:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateContentForSizeCategoryChange:(id)a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)updateWithResult:(id)a0;
- (id)_createPrimaryLabel;
- (id)_createSecondaryLabel;
- (void)_setLabelFonts;
- (id)_createLabelWithColor:(id)a0;
- (double)_verticalSpacingTopToColorDot;
- (double)_verticalSpacingTopToBaselineForTopLabel;
- (void)_addConstraintsForLabel:(id)a0 belowView:(id)a1 toArray:(id)a2;
- (double)_verticalSpacingTopToBaselineForBottomLabel;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;

@end
