@class NSString, NSDate;

@interface SAMovieV2ReviewListCell : SADomainObject

@property (copy, nonatomic) NSString *reviewAuthor;
@property (copy, nonatomic) NSDate *reviewDate;
@property (copy, nonatomic) NSString *reviewText;

+ (id)reviewListCell;
+ (id)reviewListCellWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
