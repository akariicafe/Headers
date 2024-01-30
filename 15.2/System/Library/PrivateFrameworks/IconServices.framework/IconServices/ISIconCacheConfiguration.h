@class NSURL, NSString;

@interface ISIconCacheConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *url;
@property (retain) NSString *sandboxExtension;
@property (retain) NSString *salt;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
