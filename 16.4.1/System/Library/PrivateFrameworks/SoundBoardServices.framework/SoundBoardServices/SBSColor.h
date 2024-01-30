@class NSData;

@interface SBSColor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float redComponent;
@property (readonly, nonatomic) float greenComponent;
@property (readonly, nonatomic) float blueComponent;
@property (readonly, nonatomic) NSData *data;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRed:(float)a0 green:(float)a1 blue:(float)a2;

@end
