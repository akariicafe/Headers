@class NSDate, NSString, NSArray, NSURL, NSDictionary, SAPersonAttribute, SALocation, NSNumber;

@interface SAMicroblogObject : SADomainObject

@property (copy, nonatomic) NSURL *attachment;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSDictionary *hashtagAlternatives;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSURL *refereceId;
@property (retain, nonatomic) SAPersonAttribute *sender;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSDictionary *socialProfileReferences;
@property (copy, nonatomic) NSNumber *useLocation;

+ (id)object;
+ (id)objectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
