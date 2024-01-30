@interface SiriUIConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long flamesViewFidelity;
@property (readonly, nonatomic) BOOL isSystemHostedPresentation;
@property (readonly, nonatomic) BOOL allowResizingBetweenModes;
@property (readonly, nonatomic) long long siriViewMode;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlamesViewFidelity:(long long)a0 isSystemHostedPresentation:(BOOL)a1 allowResizingBetweenModes:(BOOL)a2 siriViewMode:(long long)a3;
- (id)_NSStringFromSiriViewMode:(long long)a0;
- (id)initWithFlamesViewFidelity:(long long)a0 isSystemHostedPresentation:(BOOL)a1;

@end
