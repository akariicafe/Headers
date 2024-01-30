@class NSString, GEOMapRegion, NSDate;

@interface GEOMapDataSubscription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic, getter=_originatingBundleIdentifier) NSString *originatingBundleIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long dataTypes;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) GEOMapRegion *region;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 originatingBundleIdentifier:(id)a1 dataTypes:(unsigned long long)a2 policy:(long long)a3 expirationDate:(id)a4 region:(id)a5;

@end
