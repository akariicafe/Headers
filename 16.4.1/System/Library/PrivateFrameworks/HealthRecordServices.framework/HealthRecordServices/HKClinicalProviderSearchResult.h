@class NSString, HKClinicalBrand;

@interface HKClinicalProviderSearchResult : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, copy, nonatomic) NSString *batchID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) HKClinicalBrand *brand;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) long long minCompatibleAPIVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)informationURL;
- (id)initWithExternalID:(id)a0 batchID:(id)a1 title:(id)a2 subtitle:(id)a3 location:(id)a4 supported:(BOOL)a5 countryCode:(id)a6 brand:(id)a7 minCompatibleAPIVersion:(long long)a8;

@end
