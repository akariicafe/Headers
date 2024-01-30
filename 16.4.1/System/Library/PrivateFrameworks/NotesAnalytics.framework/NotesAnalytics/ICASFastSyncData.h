@class NSString, NSArray;

@interface ICASFastSyncData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *fastSyncSessionId;
@property (readonly, nonatomic) NSArray *participantVersions;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithFastSyncSessionId:(id)a0 participantVersions:(id)a1;

@end
