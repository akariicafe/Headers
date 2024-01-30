@interface ICInstrumentationUtilitiesRecentPasswordMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) short lockedNotesMode;
@property (nonatomic) long long contextPath;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
