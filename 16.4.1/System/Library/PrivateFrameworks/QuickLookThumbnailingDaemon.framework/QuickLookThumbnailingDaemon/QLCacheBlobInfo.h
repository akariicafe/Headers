@interface QLCacheBlobInfo : NSObject

@property unsigned long long location;
@property unsigned long long length;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
