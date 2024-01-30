@class NSString, NSURL;

@interface SSItemMedia : NSObject

@property (readonly, nonatomic) long long fullDurationInMilliseconds;
@property (readonly, nonatomic) long long mediaFileSize;
@property (copy, nonatomic) NSString *mediaKind;
@property (readonly, nonatomic) long long durationInMilliseconds;
@property (readonly, nonatomic, getter=isProtectedMedia) BOOL protectedMedia;
@property (readonly, nonatomic) NSURL *URL;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithStoreOfferDictionary:(id)a0;

@end
