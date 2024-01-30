@class NSUUID, NSNumber;

@interface _UIUserDefaultsActivityProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *activityUUID;
@property (retain, nonatomic) NSNumber *imageSlot;
@property (retain, nonatomic) NSNumber *labelSlot;
@property (nonatomic) BOOL canEdit;
@property (nonatomic) BOOL canMove;
@property (nonatomic) BOOL canHide;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) double platterTextHeight;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
