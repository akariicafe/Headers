@class NSURL, CLLocation, NSString;

@interface IMMapURLLocationInfo : NSObject

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *address;

+ (id)locationInfoFromURL:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
