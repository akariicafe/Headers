@interface SISignalStore : NSObject {
    void /* unknown type, empty encoding */ backingStore;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)logWithData:(id)a0 signalType:(id)a1 intentId:(id)a2 timestamp:(id)a3 error:(id *)a4;

@end
