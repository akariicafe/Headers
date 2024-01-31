@class NSString;

@interface NSHTTPCookie2Key : NSObject <NSCopying> {
    NSString *_name;
    NSString *_domain;
    NSString *_path;
    NSString *_partition;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
