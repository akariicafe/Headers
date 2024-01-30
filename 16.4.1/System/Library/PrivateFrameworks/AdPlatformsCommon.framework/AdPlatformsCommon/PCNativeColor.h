@class NSArray;

@interface PCNativeColor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *lightModeColors;
@property (retain, nonatomic) NSArray *darkModeColors;
@property (nonatomic) long long gradientOrientation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
