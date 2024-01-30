@class PGGraphRelationshipProcessor, NSString;

@interface PGRelationshipHolidayAnalyzer : NSObject <PGRelationshipAnalyzer>

@property (readonly, weak, nonatomic) PGGraphRelationshipProcessor *processor;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
