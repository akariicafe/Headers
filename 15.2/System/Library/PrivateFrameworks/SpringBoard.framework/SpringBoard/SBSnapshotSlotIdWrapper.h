@class CAContext;

@interface SBSnapshotSlotIdWrapper : NSObject

@property (readonly, nonatomic) unsigned int slotId;
@property (readonly, nonatomic) CAContext *context;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithContext:(id)a0 slotId:(unsigned int)a1;

@end
