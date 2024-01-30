@class NSUUID, SUAutoInstallForecast;

@interface _SUAutoInstallOperationModel : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *id;
@property (retain, nonatomic) SUAutoInstallForecast *forecast;
@property (nonatomic) int agreementStatus;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
