@class NSSet, VCCoreDuetListener;

@interface VCShortcutsObliterator : NSObject

@property (readonly, nonatomic) VCCoreDuetListener *listener;
@property (readonly, nonatomic) NSSet *syncDataHandlers;

- (void).cxx_destruct;
- (void)obliterate:(id *)a0;
- (id)initWithCoreDuetListener:(id)a0 syncDataHandlers:(id)a1;
- (BOOL)deleteKeychainItemsWithError:(id *)a0;
- (BOOL)deleteAppGroupWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)deleteDataVaultWithError:(id *)a0;
- (BOOL)terminateProcessWithIdentifier:(id)a0 assertion:(out id *)a1 error:(out id *)a2;
- (void)resetWatchSync;

@end
