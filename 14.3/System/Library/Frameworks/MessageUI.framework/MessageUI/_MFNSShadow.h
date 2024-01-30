@class NSShadow;

@interface _MFNSShadow : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSShadow *shadow;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithShadow:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
