@class MEMessageActionFlagChange, MEMessageActionDestination;

@interface MEMessageAction : NSObject <NSSecureCoding>

@property (class, readonly) MEMessageAction *moveToTrashAction;
@property (class, readonly) MEMessageAction *moveToArchiveAction;
@property (class, readonly) MEMessageAction *moveToJunkAction;
@property (class, readonly) MEMessageAction *markAsReadAction;
@property (class, readonly) MEMessageAction *markAsUnreadAction;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MEMessageActionDestination *destination;
@property (readonly, nonatomic) long long readStatus;
@property (readonly, nonatomic) MEMessageActionFlagChange *flagChange;
@property (readonly, nonatomic) long long messageColor;

+ (id)flagActionWithFlag:(long long)a0;
+ (id)setBackgroundColorActionWithColor:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDestination:(id)a0 readStatus:(long long)a1 flagChange:(id)a2 messageColor:(long long)a3;

@end
