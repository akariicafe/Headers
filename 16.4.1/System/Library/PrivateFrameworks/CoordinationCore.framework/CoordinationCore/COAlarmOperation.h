@class MTAlarm;

@interface COAlarmOperation : NSObject

@property (readonly, copy, nonatomic) MTAlarm *alarm;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initForAdding:(id)a0 completion:(id /* block */)a1;
- (id)initForRemoving:(id)a0 completion:(id /* block */)a1;
- (id)initForUpdating:(id)a0 completion:(id /* block */)a1;
- (BOOL)performOperationWithMappedAlarms:(id)a0;

@end
