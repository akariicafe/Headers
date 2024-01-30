@class NSString, NSObject;
@protocol OS_xpc_object;

@interface _DKDeviceActivityStandingQuery : NSObject <_DKStandingQuery>

@property (retain, nonatomic) NSString *queryIdentifier;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;

- (id)init;
- (void).cxx_destruct;
- (id)fetchResult;
- (void)executeWithStorage:(id)a0;
- (void)executeWithStorage:(id)a0 referenceDate:(id)a1;
- (id)fetchResultForDayOfWeek:(long long)a0;
- (id)fetchResultForDayOfWeek:(long long)a0 withStorage:(id)a1;
- (id)fetchResultFromStorage:(id)a0;

@end
