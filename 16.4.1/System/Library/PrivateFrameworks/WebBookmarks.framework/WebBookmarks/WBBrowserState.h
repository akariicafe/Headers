@class NSArray;

@interface WBBrowserState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *pinnedTabs;
@property (copy, nonatomic) NSArray *privatePinnedTabs;
@property (copy, nonatomic) NSArray *windows;
@property (copy, nonatomic) NSArray *windowStates;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPinnedTabs:(id)a0 privatePinnedTabs:(id)a1 windowStates:(id)a2;
- (id)initWithPinnedTabs:(id)a0 privatePinnedTabs:(id)a1 windows:(id)a2;

@end
