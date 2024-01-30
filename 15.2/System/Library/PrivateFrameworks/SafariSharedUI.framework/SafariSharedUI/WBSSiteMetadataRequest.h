@class NSURL, NSDictionary;

@interface WBSSiteMetadataRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSDictionary *extraInfo;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 extraInfo:(id)a1;

@end
