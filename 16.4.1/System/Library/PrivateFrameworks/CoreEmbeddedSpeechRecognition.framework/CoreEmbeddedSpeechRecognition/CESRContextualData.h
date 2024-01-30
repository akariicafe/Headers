@class NSString, _EARContextualData;

@interface CESRContextualData : NSObject

@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) _EARContextualData *contextualData;

- (id)metrics;
- (void).cxx_destruct;
- (BOOL)containsEntity;
- (void)fetchNamedEntitiesWithTimeInterval:(double)a0;
- (id)initWithConfiguration:(id)a0 taskName:(id)a1 applicationName:(id)a2;

@end
