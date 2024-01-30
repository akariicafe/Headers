@class NSSet, NSOrderedSet, SFAppCalendarUsage;

@interface SFApp : Process

@property (retain, nonatomic) NSSet *hasAppExperience;
@property (retain, nonatomic) NSSet *hasAppEndpoint;
@property (retain, nonatomic) NSSet *hasAppRun;
@property (retain, nonatomic) NSSet *hasCalendarUsage;
@property (retain, nonatomic) NSOrderedSet *hasTypicalUsage;
@property (retain, nonatomic) SFAppCalendarUsage *hintCalendarUsage;

+ (id)entityName;
+ (id)fetchRequest;

- (void)insertObject:(id)a0 inHasTypicalUsageAtIndex:(unsigned long long)a1;

@end
