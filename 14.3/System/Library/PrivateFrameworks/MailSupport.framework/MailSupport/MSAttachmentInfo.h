@class NSURL, NSString;

@interface MSAttachmentInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *filename;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 filename:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
