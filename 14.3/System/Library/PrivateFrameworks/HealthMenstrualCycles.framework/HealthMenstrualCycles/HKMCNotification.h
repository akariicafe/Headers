@class NSString, NSDateComponents;

@interface HKMCNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCategory:(id)a0 dueDateComponents:(id)a1;

@end
