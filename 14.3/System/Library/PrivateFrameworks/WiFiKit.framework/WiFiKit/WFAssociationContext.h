@class NSString, NSDictionary, NSObject;
@protocol WFNetworkListRecord;

@interface WFAssociationContext : NSObject

@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long originator;
@property (readonly, nonatomic) NSString *stateDescription;
@property (readonly, nonatomic) NSString *originatorDescription;
@property (nonatomic) BOOL secondaryScanCompleted;
@property (copy, nonatomic) NSString *sectionNameJoined;
@property (copy, nonatomic) NSDictionary *sectionCounts;
@property (retain, nonatomic) NSObject<WFNetworkListRecord> *network;

- (void).cxx_destruct;
- (id)networkName;
- (id)description;
- (id)initWithNetwork:(id)a0;

@end
