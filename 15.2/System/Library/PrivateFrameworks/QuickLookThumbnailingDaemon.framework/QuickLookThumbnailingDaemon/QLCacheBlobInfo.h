@interface QLCacheBlobInfo : NSObject

@property unsigned long long location;
@property unsigned long long length;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
