@class NSString, NSNumber;

@interface ICASFastSyncParticipantData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *countOfUniqueAccounts;
@property (readonly, nonatomic) NSNumber *countOfUniqueDevices;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCountOfUniqueAccounts:(id)a0 countOfUniqueDevices:(id)a1;

@end
