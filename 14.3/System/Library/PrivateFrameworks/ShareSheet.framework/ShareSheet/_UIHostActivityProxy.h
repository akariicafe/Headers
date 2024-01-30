@class NSUUID, NSNumber;

@interface _UIHostActivityProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *proxyIdentifier;
@property (retain, nonatomic) NSNumber *imageSlot;
@property (retain, nonatomic) NSNumber *labelSlot;
@property (nonatomic) double platterTextHeight;
@property (retain, nonatomic) NSUUID *activityIdentifierShare;
@property (retain, nonatomic) NSUUID *activityIdentifierOpen;
@property (retain, nonatomic) NSUUID *activityIdentifierCopy;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic, getter=isRestricted) BOOL restricted;
@property (nonatomic, getter=isLongPressable) BOOL longPressable;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
