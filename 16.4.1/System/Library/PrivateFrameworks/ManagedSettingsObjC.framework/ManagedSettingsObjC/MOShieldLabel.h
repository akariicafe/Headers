@class NSString, NSData;

@interface MOShieldLabel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *text;
@property (readonly, copy) NSData *colorData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 colorData:(id)a1;

@end
