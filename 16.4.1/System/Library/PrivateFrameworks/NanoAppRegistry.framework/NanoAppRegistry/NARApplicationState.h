@interface NARApplicationState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, nonatomic, getter=isRemovedSystemApp) BOOL removedSystemApp;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRestricted:(BOOL)a0 removedSystemApp:(BOOL)a1;

@end
