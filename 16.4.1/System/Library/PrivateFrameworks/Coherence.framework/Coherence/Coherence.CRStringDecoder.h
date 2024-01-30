@interface Coherence.CRStringDecoder : NSObject <CRStringDecoderProtocol> {
    void /* unknown type, empty encoding */ encoded;
    void /* unknown type, empty encoding */ subsequence;
    void /* unknown type, empty encoding */ decoder;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned int)substringChild:(long long)a0;
- (unsigned int)substringRemovedAddedByCounter:(long long)a0;
- (unsigned int)substringLength;
- (id)addedByVersionWithError:(id *)a0;
- (void)decodeSubstring:(long long)a0;
- (id)fromAddedByVersionWithError:(id *)a0;
- (id)fromVersionWithError:(id *)a0;
- (id)storageWithError:(id *)a0;
- (long long)substringAddedByCount;
- (unsigned int)substringAddedByCounter:(long long)a0;
- (id)substringAddedByReplica:(long long)a0 withError:(id *)a1;
- (unsigned int)substringCharClock;
- (id)substringCharReplicaWithError:(id *)a0;
- (long long)substringChildCount;
- (long long)substringContentOptions;
- (long long)substringCount;
- (long long)substringRemovedAddedByCount;
- (id)substringRemovedAddedByReplica:(long long)a0 withError:(id *)a1;
- (id)versionWithError:(id *)a0;

@end
