@class NSString, PGGraphRelationshipProcessor;

@interface PGRelationshipHolidayAnalyzer : NSObject <PGRelationshipAnalyzer> {
    PGGraphRelationshipProcessor *_processor;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
