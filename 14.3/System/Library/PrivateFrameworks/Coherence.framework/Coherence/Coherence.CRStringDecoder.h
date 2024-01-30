@interface Coherence.CRStringDecoder : NSObject <CRStringDecoderProtocol> {
    void /* unknown type, empty encoding */ encoded;
    void /* unknown type, empty encoding */ subsequence;
    void /* unknown type, empty encoding */ decodeContext;
}

- (id)context;
- (id)init;
- (void).cxx_destruct;
- (id)versionWithError:(id *)a0;
- (id)storageWithError:(id *)a0;
- (long long)substringCount;
- (id)addedByVersionWithError:(id *)a0;
- (void)decodeSubstring:(long long)a0;
- (unsigned int)substringCharReplica;
- (unsigned int)substringCharClock;
- (unsigned int)substringLength;
- (long long)substringAddedByCount;
- (unsigned int)substringAddedByReplica:(long long)a0;
- (unsigned int)substringAddedByCounter:(long long)a0;
- (long long)substringChildCount;
- (unsigned int)substringChild:(long long)a0;

@end
