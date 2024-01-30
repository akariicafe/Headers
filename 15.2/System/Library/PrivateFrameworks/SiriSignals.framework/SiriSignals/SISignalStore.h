@interface SISignalStore : NSObject {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ intentGroupIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)logWithData:(id)a0 signalType:(id)a1 intentId:(id)a2 timestamp:(id)a3 error:(id *)a4;

@end
