@class NSString, NSObject;
@protocol OS_xpc_object;

@interface _DKDeviceActivityStandingQuery : NSObject <_DKStandingQuery>

@property (retain, nonatomic) NSString *queryIdentifier;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;

- (id)fetchResultForDayOfWeek:(long long)a0 withStorage:(id)a1;
- (id)fetchResultFromStorage:(id)a0;
- (id)fetchResult;
- (void)executeWithStorage:(id)a0;
- (void).cxx_destruct;
- (void)executeWithStorage:(id)a0 referenceDate:(id)a1;
- (id)init;
- (id)fetchResultForDayOfWeek:(long long)a0;

@end
