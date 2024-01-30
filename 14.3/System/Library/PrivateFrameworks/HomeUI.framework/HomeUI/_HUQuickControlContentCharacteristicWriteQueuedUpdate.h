@class NSMutableSet;
@protocol NACancelable;

@interface _HUQuickControlContentCharacteristicWriteQueuedUpdate : NSObject

@property (readonly, nonatomic) id<NACancelable> cancellationToken;
@property (readonly, nonatomic) NSMutableSet *affectedCharacteristics;

- (void).cxx_destruct;
- (id)initWithCancellationToken:(id)a0;

@end
