@class NSString;

@interface ANSectionSubtypeDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountTypeID;
@property (nonatomic) long long subtype;
@property (nonatomic) BOOL allowsAddingToLockScreenWhenUnlocked;
@property (copy, nonatomic) NSString *fullUnlockActionLabel;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initForAccountWithType:(id)a0;

@end
