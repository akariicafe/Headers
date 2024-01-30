@class SASportsLeague, NSDictionary, NSURL, NSString, SAUIAppPunchOut, NSArray;

@interface SASportsEntity : SADomainObject

@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSDictionary *images;
@property (copy, nonatomic) NSURL *largeImage;
@property (copy, nonatomic) NSDictionary *largeImages;
@property (retain, nonatomic) SASportsLeague *league;
@property (copy, nonatomic) NSURL *listImage;
@property (copy, nonatomic) NSDictionary *listImages;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAUIAppPunchOut *punchout;
@property (copy, nonatomic) NSArray *themeImages;

+ (id)entity;
+ (id)entityWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
