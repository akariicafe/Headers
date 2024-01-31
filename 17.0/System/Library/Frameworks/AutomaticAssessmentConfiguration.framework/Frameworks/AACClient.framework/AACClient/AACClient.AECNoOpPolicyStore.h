@interface AACClient.AECNoOpPolicyStore : _TtCs12_SwiftObject <AEPolicyStore>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasPersistentData;

- (id)readOnlyScratchpadForIdentifier:(id)a0;
- (BOOL)removeAllScratchpadsWithError:(id *)a0;
- (id)writeOnlyScratchpadForIdentifier:(id)a0;

@end
