@class TSTGroupNode;

@interface TSTGroupByChangeDelayedNotification : NSObject

@property (nonatomic) int notifyType;
@property (retain, nonatomic) TSTGroupNode *groupNode;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } rowUID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithNotifyType:(int)a0 group:(id)a1;
- (id)initWithNotifyType:(int)a0 group:(id)a1 rowUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a2;
- (void)sendToDistributor:(id)a0;

@end
