@interface NullCodecConfiguration : AUPasscodeCodecConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float retrievalCallbackInterval;

- (void)setDefaultValues;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)commandLineOptions;
- (id)initWithCommandLineArgs:(id)a0;

@end
