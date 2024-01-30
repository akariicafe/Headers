@class NSString, NSURL, NSDate;

@interface EMMailDropMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) long long fileSize;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) BOOL autoArchive;
@property (retain, nonatomic) NSURL *directUrl;
@property (retain, nonatomic) NSURL *wrappedUrl;
@property (retain, nonatomic) NSDate *expiration;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSString *UUID;
@property (nonatomic) BOOL isInvalid;

+ (id)mailDropMetadata;

- (void)merge:(id)a0;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isBanner;
- (BOOL)isBannerWithMultiple;
- (id)directUrlString;
- (BOOL)isPhotoArchive;
- (id)wrappedUrlString;
- (void)encodeWithCoder:(id)a0;

@end
