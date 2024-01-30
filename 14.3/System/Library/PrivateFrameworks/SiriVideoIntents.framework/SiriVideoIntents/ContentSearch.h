@class SearchAttributes, NSString, NSArray, NSNumber, INDateComponentsRange;

@interface ContentSearch : INObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *umcId;
@property (nonatomic) long long episodeReference;
@property (copy, nonatomic) NSString *episodeNumber;
@property (nonatomic) long long seasonReference;
@property (copy, nonatomic) NSString *seasonNumber;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *roles;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) INDateComponentsRange *releaseDateRange;
@property (copy, nonatomic) NSString *studio;
@property (nonatomic) long long sort;
@property (copy, nonatomic) NSNumber *recommendedAge;
@property (copy, nonatomic) SearchAttributes *attributes;
@property (copy, nonatomic) NSNumber *itemLimit;

@end
