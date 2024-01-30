@class NSDictionary, NTPBBundleIDMapping;

@interface FCPersonalizationBundleIDMapping : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding> {
    NTPBBundleIDMapping *_pbBundleIDMapping;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *bundleIDMapping;
@property (readonly, nonatomic) unsigned long long count;

+ (id)decendingSpecificityBundleIDsForBundleID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPBBundleIDMapping:(id)a0;
- (id)tagScoresForBundleID:(id)a0;
- (id)jsonEncodableObject;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
