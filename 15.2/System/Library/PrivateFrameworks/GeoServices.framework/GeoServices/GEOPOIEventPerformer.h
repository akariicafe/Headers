@class NSString, NSURL;

@interface GEOPOIEventPerformer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *iTunesIdentifier;
@property (retain, nonatomic) NSURL *iTunesURL;

+ (id)poiEventPerformersForPerformers:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPerformer:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
