@class NSURL;

@interface ENRegionTravelerServerDownloadConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *tekTravelerDownloadBaseURL;
@property (readonly, copy, nonatomic) NSURL *tekTravelerDownloadIndexURL;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithServerResponseDictionary:(id)a0;

@end
