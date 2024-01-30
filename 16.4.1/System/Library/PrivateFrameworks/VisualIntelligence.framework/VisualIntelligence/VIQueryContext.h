@class NSString, NSArray, NSURL, CLLocation;
@protocol MTLDevice;

@interface VIQueryContext : NSObject <NSCopying>

@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) BOOL includeLowConfidenceRegions;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned long long queryID;
@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) double uiScale;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSArray *catalogIDs;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSURL *referralURL;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) id<MTLDevice> preferredMetalDevice;

+ (id)contextWithDictionary:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithQueryID:(unsigned long long)a0 applicationIdentifier:(id)a1 uiScale:(double)a2 teamID:(id)a3 catalogIDs:(id)a4 location:(id)a5 imageURL:(id)a6 referralURL:(id)a7 imageType:(long long)a8 featureIdentifier:(id)a9 locale:(id)a10 countryCode:(id)a11 preferredMetalDevice:(id)a12 includeLowConfidenceRegions:(BOOL)a13;

@end
