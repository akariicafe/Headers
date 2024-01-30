@class NSString;

@interface CSSmartSiriVolumeEstimate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *debugLogPath;
@property (readonly, nonatomic) float volumeEstimate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVolumeEstimate:(float)a0 debugLogFile:(id)a1;

@end
