@class SUBDescriptor, SUBProgress;

@interface SUBDownload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUBDescriptor *descriptor;
@property (retain, nonatomic) SUBProgress *progress;

+ (id)downloadWithDescriptor:(id)a0 andProgress:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;

@end
