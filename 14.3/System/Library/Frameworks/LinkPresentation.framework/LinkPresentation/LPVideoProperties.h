@class UIColor, NSString;

@interface LPVideoProperties : NSObject <NSCopying>

@property (retain, nonatomic, setter=_setOverlappingControlsColor:) UIColor *_overlappingControlsColor;
@property (nonatomic) BOOL hasAudio;
@property (copy, nonatomic) NSString *accessibilityText;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
