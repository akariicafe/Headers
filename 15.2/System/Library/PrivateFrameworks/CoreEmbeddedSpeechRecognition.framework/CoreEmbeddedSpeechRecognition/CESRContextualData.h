@class NSString, _EARContextualData;

@interface CESRContextualData : NSObject

@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) _EARContextualData *contextualData;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 taskName:(id)a1 applicationName:(id)a2;
- (void)fetchNamedEntitiesWithTimeInterval:(double)a0;

@end
