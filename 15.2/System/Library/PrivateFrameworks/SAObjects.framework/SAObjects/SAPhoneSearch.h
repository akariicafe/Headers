@class NSArray, NSNumber, NSDate;

@interface SAPhoneSearch : SADomainCommand

@property (copy, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSDate *end;
@property (copy, nonatomic) NSNumber *faceTime;
@property (copy, nonatomic) NSNumber *faceTimeAudio;
@property (copy, nonatomic) NSNumber *isNew;
@property (copy, nonatomic) NSNumber *last;
@property (copy, nonatomic) NSNumber *missed;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSDate *start;
@property (copy, nonatomic) NSNumber *voiceMail;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
