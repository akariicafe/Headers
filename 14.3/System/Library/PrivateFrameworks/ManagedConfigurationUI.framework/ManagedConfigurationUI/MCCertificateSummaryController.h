@class NSArray, NSString, MCDetailsHeaderCell, NSDate, MCDetailsDescriptionTableCell, UITableViewCell;

@interface MCCertificateSummaryController : PSListController {
    struct __SecTrust { } *_trust;
    NSArray *_properties;
    NSString *_displayName;
    NSString *_organizationName;
    NSString *_purpose;
    NSDate *_expiration;
    MCDetailsHeaderCell *_configHeader;
    MCDetailsDescriptionTableCell *_configMiddle;
    UITableViewCell *_configBottom;
    BOOL _backButtonWasHidden;
}

+ (id)_dateFormatter;

- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)actionButtonPressed:(id)a0;
- (id)_valueAtPath:(id)a0;
- (void)_setTrust:(struct __SecTrust { } *)a0;
- (void)hideActionButton;

@end
