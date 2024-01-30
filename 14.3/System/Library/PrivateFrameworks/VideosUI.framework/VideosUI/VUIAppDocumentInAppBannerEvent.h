@class NSString;

@interface VUIAppDocumentInAppBannerEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSString *targetId;

- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithTargetId:(id)a0;

@end
