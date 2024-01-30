@class NSURL, NSURLSessionConfiguration;

@interface OspreyConnectionConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *connectionUrl;
@property (retain, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
