@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
    struct _HMDStructuredDataToken { long long type; id value; } _token;
}

- (void)endArray;
- (long long)tokenType;
- (unsigned long long)beginArray;
- (id)readDate;
- (void).cxx_destruct;
- (void)endDictionary;
- (id)error;
- (void)failWithError:(id)a0;
- (id)readData;
- (id)readString;
- (unsigned long long)beginDictionary;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)a0;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (void)readNull;
- (BOOL)readBoolean;
- (id)readNumber;
- (id)readUUID;
- (id)readDictionaryKey;
- (void)skipToken;

@end
