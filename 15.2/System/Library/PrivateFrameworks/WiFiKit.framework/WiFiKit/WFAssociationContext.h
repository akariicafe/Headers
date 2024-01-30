@class NSString, NSDictionary, NSDate, NSObject;
@protocol WFNetworkListRecord;

@interface WFAssociationContext : NSObject

@property (retain, nonatomic) NSDate *associationStart;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long originator;
@property (readonly, nonatomic) NSString *stateDescription;
@property (readonly, nonatomic) NSString *originatorDescription;
@property (nonatomic) BOOL secondaryScanCompleted;
@property (copy, nonatomic) NSString *sectionNameJoined;
@property (copy, nonatomic) NSDictionary *sectionCounts;
@property (retain, nonatomic) NSObject<WFNetworkListRecord> *network;

- (id)networkName;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNetwork:(id)a0;
- (id)formattedStartDate;

@end
