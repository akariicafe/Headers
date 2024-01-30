@class NSString, NSMutableOrderedSet;
@protocol SWLogger;

@interface SWSetupManager : NSObject <SWSetupManager>

@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly, nonatomic) NSMutableOrderedSet *tasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
