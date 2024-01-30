@class NSString, NSArray;

@interface _UIColorPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL showsAlpha;
@property (nonatomic) BOOL _isEmbedded;
@property (nonatomic) double _keyboardSpace;
@property (copy, nonatomic) NSArray *_suggestedColors;
@property (nonatomic) BOOL _shouldUseDarkGridInDarkMode;
@property (nonatomic) long long _userInterfaceStyleForGrid;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
