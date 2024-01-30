@class NSURL, INFile;

@interface WFOnScreenContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) INFile *file;

- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 file:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
