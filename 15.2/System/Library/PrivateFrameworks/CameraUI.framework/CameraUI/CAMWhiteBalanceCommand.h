@interface CAMWhiteBalanceCommand : CAMCaptureCommand

@property (readonly, nonatomic) BOOL _matchExposureMode;
@property (readonly, nonatomic) long long _whiteBalanceMode;

- (id)initWithWhiteBalanceMode:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMatchExposureMode;
- (id)_descriptionForWhiteBalanceMode:(long long)a0;

@end
