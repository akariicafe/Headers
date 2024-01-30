@class NSString, NSArray;
@protocol CPAlertDelegate;

@interface CPActionSheetTemplate : CPTemplate <CPAlertDelegate>

@property (retain, nonatomic) id<CPAlertDelegate> alertDelegate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setTrailingNavigationBarButtons:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)handleAlertActionForIdentifier:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 actions:(id)a2;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)a0;
- (id)trailingNavigationBarButtons;

@end
