@class Filter;

@interface FilterActions : NSObject

@property (nonatomic) unsigned int triggerSymptomId;
@property (readonly, nonatomic) Filter *initialFilter;
@property (readonly, nonatomic) long long delayValue;
@property (readonly, nonatomic) Filter *finalFilter;

+ (id)initForSymptom:(unsigned int)a0 trigger:(unsigned int)a1 triggering:(id)a2 finally:(id)a3 after:(id)a4;

- (void).cxx_destruct;
- (id)description;
- (void)initForSymptom:(unsigned int)a0 trigger:(unsigned int)a1 triggering:(id)a2 finally:(id)a3 after:(id)a4;

@end
