@interface Coherence.CRStringDecoder : NSObject <CRStringDecoderProtocol> {
    void /* unknown type, empty encoding */ encoded;
    void /* unknown type, empty encoding */ subsequence;
    void /* unknown type, empty encoding */ decoder;
}

- (id)context;
- (void).cxx_destruct;
- (id)init;
- (id)storageWithError:(id *)a0;
- (long long)substringCount;
- (id)versionWithError:(id *)a0;
- (id)addedByVersionWithError:(id *)a0;
- (void)decodeSubstring:(long long)a0;
- (id)substringCharReplicaWithError:(id *)a0;
- (unsigned int)substringCharClock;
- (unsigned int)substringLength;
- (long long)substringAddedByCount;
- (id)substringAddedByReplica:(long long)a0 withError:(id *)a1;
- (unsigned int)substringAddedByCounter:(long long)a0;
- (long long)substringChildCount;
- (unsigned int)substringChild:(long long)a0;

@end
