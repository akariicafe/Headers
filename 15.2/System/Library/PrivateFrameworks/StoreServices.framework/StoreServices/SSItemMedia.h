@class NSString, NSURL;

@interface SSItemMedia : NSObject

@property (readonly, nonatomic) long long fullDurationInMilliseconds;
@property (readonly, nonatomic) long long mediaFileSize;
@property (copy, nonatomic) NSString *mediaKind;
@property (readonly, nonatomic) long long durationInMilliseconds;
@property (readonly, nonatomic, getter=isProtectedMedia) BOOL protectedMedia;
@property (readonly, nonatomic) NSURL *URL;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithStoreOfferDictionary:(id)a0;

@end
