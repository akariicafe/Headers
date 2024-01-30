@class SearchAttributes, NSString, NSArray, NSNumber, INDateComponentsRange;

@interface ContentSearch : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *umcId;
@property (nonatomic) long long episodeReference;
@property (nonatomic, copy) NSString *episodeNumber;
@property (nonatomic) long long seasonReference;
@property (nonatomic, copy) NSString *seasonNumber;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSArray *roles;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, retain) INDateComponentsRange *releaseDateRange;
@property (nonatomic, copy) NSString *studio;
@property (nonatomic) long long sort;
@property (nonatomic, retain) NSNumber *recommendedAge;
@property (nonatomic, retain) SearchAttributes *attributes;
@property (nonatomic, retain) NSNumber *itemLimit;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
