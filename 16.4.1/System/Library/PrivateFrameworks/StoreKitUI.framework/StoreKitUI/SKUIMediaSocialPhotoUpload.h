@class NSString, NSNumber;

@interface SKUIMediaSocialPhotoUpload : NSObject <NSCopying>

@property (nonatomic) BOOL hasAlpha;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long length;
@property (copy, nonatomic) NSString *MD5;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *tokenType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSNumber *uniqueIdentifier;
@property (nonatomic) unsigned long long width;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithUploadDictionary:(id)a0;

@end
