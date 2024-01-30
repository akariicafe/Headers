@class NSString;

@interface _UIColorPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL showsAlpha;
@property (nonatomic) BOOL _isEmbedded;
@property (nonatomic) double _keyboardSpace;
@property (nonatomic) BOOL _shouldUseDarkGridInDarkMode;
@property (nonatomic) long long _userInterfaceStyleForGrid;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
