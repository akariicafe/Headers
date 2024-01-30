@interface _DUIAccessibilityDragStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long itemCount;
@property (nonatomic) unsigned long long potentialOperation;
@property (nonatomic) BOOL forbidden;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
