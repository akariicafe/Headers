@class NSString;

@interface SADonateSiriQueryToPortrait : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *originalQuery;
@property (copy, nonatomic) NSString *qid;
@property (nonatomic) long long rank;
@property (nonatomic) double rankerConfidence;

+ (id)donateSiriQueryToPortrait;
+ (id)donateSiriQueryToPortraitWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
