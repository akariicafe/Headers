@class NSDictionary, NSSet, NTPBPersonalizationWhitelist;

@interface FCPersonalizationWhitelist : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding> {
    NTPBPersonalizationWhitelist *_pbWhitelist;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *whitelist;
@property (retain, nonatomic) NSSet *portraitDisabledTagIDs;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSDictionary *defaultTags;
@property (readonly, nonatomic) NSDictionary *optionalTags;

- (id)jsonEncodableObject;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPBPersonalizationWhitelist:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
