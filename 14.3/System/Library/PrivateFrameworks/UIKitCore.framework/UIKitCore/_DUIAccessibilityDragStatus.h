@interface _DUIAccessibilityDragStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long itemCount;
@property (nonatomic) unsigned long long potentialOperation;
@property (nonatomic) BOOL forbidden;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
