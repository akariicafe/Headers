@interface CoreIDVShared.IdentityCredentialPayloadBuilder : NSObject {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ randomDataSize;
    void /* unknown type, empty encoding */ cborDataTag;
    void /* unknown type, empty encoding */ digestAlgorithm;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ identifierStringData;
    void /* unknown type, empty encoding */ kidRange;
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void).cxx_destruct;

@end
