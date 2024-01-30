@class NSData, NSURL, NSString;

@interface BLTHashCacheItem : NSObject {
    NSData *_MD5;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *identifier;

+ (id)hashCacheItemWithData:(id)a0 URL:(id)a1 identifier:(id)a2;

- (id)MD5;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToItem:(id)a0;
- (id)initWithURL:(id)a0 data:(id)a1 identifier:(id)a2;

@end
