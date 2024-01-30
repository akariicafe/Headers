@interface PKDisplayTraitCollection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) double canvasScale;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDefaultTraits;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
