@interface MADownloadConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL discretionary;

- (void)encodeWithCoder:(id)a0;
- (void)logConfig;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
