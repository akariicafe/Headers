@class NSString, NSArray, NSURL, SALocalSearchRating, NSNumber;

@interface SALocalSearchReviewList : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *providerId;
@property (copy, nonatomic) NSString *providerId2;
@property (retain, nonatomic) SALocalSearchRating *rating;
@property (copy, nonatomic) NSArray *selectReviews;
@property (copy, nonatomic) NSNumber *totalReviewCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reviewList;
+ (id)reviewListWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
