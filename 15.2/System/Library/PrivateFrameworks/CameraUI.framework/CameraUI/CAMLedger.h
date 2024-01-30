@interface CAMLedger : NSObject {
    struct ledger_entry_info { long long x0; long long x1; long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } *_ledgerEntries;
    long long _ledgerCount;
    int _footprintLedgerIndex;
}

+ (id)sharedInstance;

- (long long)footprint;
- (id)init;
- (void)dealloc;

@end
