@class NSString, PGGraphPersonNode, NSMutableSet, PGGraphSocialGroupNode;

@interface PGKeyPeopleForHolidayData : NSObject

@property (retain, nonatomic) NSMutableSet *holidayRules;
@property (retain, nonatomic) PGGraphSocialGroupNode *socialGroupNode;
@property (retain, nonatomic) PGGraphPersonNode *personNode;
@property (retain, nonatomic) NSMutableSet *momentNodes;
@property (readonly) double score;
@property (readonly) NSString *uuid;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSocialGroupNode:(id)a0;
- (id)initWithPersonNode:(id)a0;

@end
