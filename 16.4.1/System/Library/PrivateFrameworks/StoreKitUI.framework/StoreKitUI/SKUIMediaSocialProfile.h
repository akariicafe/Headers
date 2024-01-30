@class NSURL, NSString;

@interface SKUIMediaSocialProfile : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *backgroundImageURL;
@property (copy, nonatomic) NSString *bio;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *profileImageURL;
@property (copy, nonatomic) NSString *profileType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithProfileDictionary:(id)a0;

@end
