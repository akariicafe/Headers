@class NSString, UIImage;

@interface SLMicroBlogUserRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *screen_name;
@property (retain, nonatomic) NSString *profile_image_url;
@property (retain) UIImage *profileImageCache;

+ (id)userRecordWithDictionaryRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void)setValuesWithUserDictionary:(id)a0;

@end
