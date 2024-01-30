@class NSDictionary, NTPBURLMapping;

@interface FCPersonalizationURLMapping : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding> {
    NTPBURLMapping *_pbURLMapping;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *urlMappingByDomain;
@property (readonly, nonatomic) unsigned long long count;

+ (id)domainForURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonEncodableObject;
- (id)initWithCoder:(id)a0;
- (id)initWithPBURLMapping:(id)a0;
- (id)tagScoresForURL:(id)a0;
- (id)popularityForURL:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
