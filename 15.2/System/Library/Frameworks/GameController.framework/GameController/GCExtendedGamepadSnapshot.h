@class NSData;

@interface GCExtendedGamepadSnapshot : GCExtendedGamepad

@property (copy) NSData *snapshotData;

- (void).cxx_destruct;
- (id)init;
- (id)initWithController:(id)a0 snapshotData:(id)a1;
- (id)initWithSnapshotData:(id)a0;

@end
