@interface ADAdSpaceEventInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long screenfuls;
@property (nonatomic) unsigned long long slotPosition;
@property (nonatomic) unsigned long long reuseCount;
@property (nonatomic) long long lastErrorCode;

- (id)initWithCoder:(id)a0;
- (id)initWithRecipientInfo:(id)a0 reuseCount:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
