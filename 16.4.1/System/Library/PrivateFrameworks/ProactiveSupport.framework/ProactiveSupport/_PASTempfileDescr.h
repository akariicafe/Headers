@class NSString;

@interface _PASTempfileDescr : NSObject <NSCopying>

@property (readonly, nonatomic) int fd;
@property (readonly, nonatomic) NSString *path;

+ (id)tempfileDescrWithFd:(int)a0 path:(id)a1;

- (BOOL)isEqualToTempfileDescr:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFd:(int)a0 path:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
