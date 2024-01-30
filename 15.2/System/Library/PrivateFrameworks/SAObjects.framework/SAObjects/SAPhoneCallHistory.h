@class NSNumber;

@interface SAPhoneCallHistory : SAPhoneCallSearchResult

@property (copy, nonatomic) NSNumber *blocked;
@property (copy, nonatomic) NSNumber *callCount;
@property (copy, nonatomic) NSNumber *faceTime;
@property (copy, nonatomic) NSNumber *faceTimeAudio;
@property (copy, nonatomic) NSNumber *missed;
@property (copy, nonatomic) NSNumber *outgoing;

+ (id)callHistory;
+ (id)callHistoryWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
