@class NSString, NSURL;

@interface ENRegionServerAgencyExposureNotificationConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *classificationName;
@property (readonly, copy, nonatomic) NSURL *classificationURL;
@property (readonly, copy, nonatomic) NSString *localizedExposureDetailBody;
@property (readonly, copy, nonatomic) NSString *localizedNotificationSubject;
@property (readonly, copy, nonatomic) NSString *localizedNotificationBody;

+ (BOOL)getNotificationConfiguration:(id *)a0 fromDictionary:(id)a1 locale:(id)a2 index:(unsigned char)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
