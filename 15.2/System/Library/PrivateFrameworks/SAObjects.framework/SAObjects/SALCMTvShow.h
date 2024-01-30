@class NSString;

@interface SALCMTvShow : SALCMContent

@property (copy, nonatomic) NSString *seriesName;

+ (id)tvShow;
+ (id)tvShowWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
