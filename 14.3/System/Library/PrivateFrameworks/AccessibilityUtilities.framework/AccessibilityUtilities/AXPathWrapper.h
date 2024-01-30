@interface AXPathWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGPath { } *path;

+ (id)currentSharedInstance;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
