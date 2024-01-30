@class NSString, CLLocation, NSURL;
@protocol MTLDevice;

@interface VIQueryContext : NSObject <NSCopying>

@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) unsigned long long queryID;
@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) double uiScale;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSURL *referralURL;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) id<MTLDevice> preferredMetalDevice;

+ (id)contextWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueryID:(unsigned long long)a0 applicationIdentifier:(id)a1 uiScale:(double)a2 location:(id)a3 imageURL:(id)a4 referralURL:(id)a5 imageType:(long long)a6 featureIdentifier:(id)a7 preferredMetalDevice:(id)a8;

@end
