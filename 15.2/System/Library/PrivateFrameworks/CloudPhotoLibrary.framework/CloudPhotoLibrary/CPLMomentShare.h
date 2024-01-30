@class NSString, NSArray, NSData, NSDate, NSURL;

@interface CPLMomentShare : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) short mode;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (nonatomic) long long assetCount;
@property (nonatomic) long long photosCount;
@property (nonatomic) long long videosCount;
@property (copy, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSData *previewData;
@property (copy, nonatomic) NSArray *participants;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSString *originatingScopeIdentifier;

+ (id)cplAdditionalSecureClassesForProperty:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithScopeChange:(id)a0;
- (void)updateScopeChange:(id)a0;
- (id)translateToScopeChangeWithScopeType:(long long)a0;

@end
