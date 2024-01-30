@interface MADownloadConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL discretionary;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)logConfig;
- (void)encodeWithCoder:(id)a0;

@end
