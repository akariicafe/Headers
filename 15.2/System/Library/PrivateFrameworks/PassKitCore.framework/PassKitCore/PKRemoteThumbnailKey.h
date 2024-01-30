@class NSString, NSDictionary;

@interface PKRemoteThumbnailKey : NSObject <NSCopying>

@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSDictionary *requestDictionary;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToRemoteThumbnailKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
