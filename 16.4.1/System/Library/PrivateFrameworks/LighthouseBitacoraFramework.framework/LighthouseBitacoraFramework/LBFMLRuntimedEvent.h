@class NSNumber, NSString;

@interface LBFMLRuntimedEvent : NSObject

@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) NSNumber *scheduled;
@property (readonly, nonatomic) long long eventType;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithScheduleStatus:(BOOL)a0;
- (id)initWithTaskCompleted:(BOOL)a0 error:(id)a1;
- (id)initWithTaskFetched:(BOOL)a0 error:(id)a1;
- (id)initWithTaskScheduled:(BOOL)a0 error:(id)a1;

@end
