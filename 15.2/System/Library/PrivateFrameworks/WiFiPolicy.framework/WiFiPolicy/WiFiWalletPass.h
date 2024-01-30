@class NSString, NSSet, NSDate;
@protocol TBScore;

@interface WiFiWalletPass : NSObject <WiFiCandidateNetwork>

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSDate *relevantDate;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *SSID;
@property (copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSSet *accessPoints;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSSet *attributes;
@property (nonatomic) BOOL matched;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long venueGroup;
@property (readonly, nonatomic) unsigned int venueType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TBScore> popularityScore;
@property (readonly, nonatomic) id<TBScore> qualityScore;

- (void).cxx_destruct;
- (BOOL)containsAccessPointMatchingBSSIDs:(id)a0;

@end
