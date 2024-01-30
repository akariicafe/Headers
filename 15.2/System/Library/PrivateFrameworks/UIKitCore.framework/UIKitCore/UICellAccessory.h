@class NSString, UIColor;

@interface UICellAccessory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_isSystemType) BOOL isSystemType;
@property (readonly, nonatomic, getter=_systemType) long long systemType;
@property (readonly, nonatomic, getter=_identifier) NSString *identifier;
@property (retain, nonatomic, getter=_backgroundColor, setter=_setBackgroundColor:) UIColor *backgroundColor;
@property (nonatomic) long long displayedState;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) double reservedLayoutWidth;
@property (retain, nonatomic) UIColor *tintColor;

- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_defaultPlacementForHeader:(BOOL)a0;
- (unsigned long long)hash;

@end
