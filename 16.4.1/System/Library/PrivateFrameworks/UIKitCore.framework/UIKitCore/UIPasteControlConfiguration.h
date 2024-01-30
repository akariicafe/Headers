@class UIColor;

@interface UIPasteControlConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL _shouldLayoutSynchronously;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) long long cornerStyle;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *baseForegroundColor;
@property (retain, nonatomic) UIColor *baseBackgroundColor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
