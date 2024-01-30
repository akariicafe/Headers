@class NSString, NSSet;
@protocol TBScore, TBNetwork;

@interface WiFi3BarsNetwork : NSObject <WiFiCandidateNetwork>

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *SSID;
@property (retain, nonatomic) id<TBNetwork> network;
@property (nonatomic) BOOL unwantedNetworkName;
@property (readonly, nonatomic) NSSet *accessPoints;
@property (readonly, copy, nonatomic) NSString *password;
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

@end
