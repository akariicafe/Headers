@class NSString, NSArray, ADMRAIDAction, NSNumber;

@interface ADAdActionPublicAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL actionLeavesApplication;
@property (nonatomic) int action;
@property (nonatomic) unsigned long long actionViewControllerPresentationOrientationMask;
@property (nonatomic) BOOL actionViewControllerHidesStatusBar;
@property (nonatomic) int transitionType;
@property (copy, nonatomic) NSString *actionURLString;
@property (copy, nonatomic) ADMRAIDAction *MRAIDAction;
@property (copy, nonatomic) NSNumber *adamIdentifier;
@property (copy, nonatomic) NSArray *iTunesMetadata;
@property (copy, nonatomic) NSString *calendarEventIdentifier;

- (id)_actionDescription;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
