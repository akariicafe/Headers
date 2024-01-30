@class NSString, NSArray, NSURL, ACAccount;

@interface AMSMetricsBatch : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) BOOL anonymous;
@property (retain, nonatomic) NSString *canaryIdentifier;
@property (nonatomic) BOOL containsLoadURL;
@property (retain, nonatomic) NSArray *droppedEvents;
@property (retain, nonatomic) NSArray *eventDictionaries;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSURL *reportURL;
@property (retain, nonatomic) NSArray *skippedEvents;

- (void).cxx_destruct;

@end
