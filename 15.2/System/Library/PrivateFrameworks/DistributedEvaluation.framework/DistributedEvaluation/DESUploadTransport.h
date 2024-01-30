@class NSURL;

@interface DESUploadTransport : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL originRoute;
@property (readonly, nonatomic) BOOL parsecRoute;
@property (readonly, nonatomic) BOOL dediscoRoute;
@property (readonly, copy, nonatomic) NSURL *postBackBaseURL;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPolicy:(id)a0 recipe:(id)a1;
- (id)initWithDediscoRoute:(BOOL)a0 originRoute:(BOOL)a1 parsecRoute:(BOOL)a2 postBackBaseURL:(id)a3;

@end
