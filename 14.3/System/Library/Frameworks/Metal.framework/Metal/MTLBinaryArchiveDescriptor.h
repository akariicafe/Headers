@class NSURL;

@interface MTLBinaryArchiveDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long writingOptions;
@property (copy, nonatomic) NSURL *url;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
