@class NSString, SAUIAppPunchOut, SACalendar, SALocalSearchRating;

@interface SALocalSearchReview : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SACalendar *lastUpdated;
@property (copy, nonatomic) NSString *publication;
@property (retain, nonatomic) SAUIAppPunchOut *reviewPunchOut;
@property (retain, nonatomic) SALocalSearchRating *reviewRating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)review;
+ (id)reviewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
