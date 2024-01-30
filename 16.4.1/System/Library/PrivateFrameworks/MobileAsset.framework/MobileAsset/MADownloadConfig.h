@interface MADownloadConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL discretionary;

- (void)encodeWithCoder:(id)a0;
- (id)encodeAsPlist;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithPlist:(id)a0;
- (id)init;
- (void)logConfig;

@end
