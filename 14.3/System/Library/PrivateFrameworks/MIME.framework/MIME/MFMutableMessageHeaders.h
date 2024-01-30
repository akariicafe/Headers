@class NSString, NSMutableDictionary, NSMutableArray;

@interface MFMutableMessageHeaders : MFMessageHeaders <ECMutableMessageHeaders> {
    NSMutableDictionary *_headersAdded;
    NSMutableArray *_headersRemoved;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopy;
- (id)encodedHeaders;
- (void).cxx_destruct;
- (void)setAddressListForSender:(id)a0;
- (void)setAddressListForTo:(id)a0;
- (void)setAddressListForCc:(id)a0;
- (void)setAddressListForBcc:(id)a0;
- (id)headersDictionary;
- (void)setReferences:(id)a0;
- (id)allHeaderKeys;
- (void)stripInternalHeaders;
- (void)removeHeaderForKey:(id)a0;
- (id)firstHeaderForKey:(id)a0;
- (void)setHeader:(id)a0 forKey:(id)a1;
- (BOOL)hasHeaderForKey:(id)a0;
- (void)setAddressList:(id)a0 forKey:(id)a1;
- (id)_copyHeaderValueForKey:(id)a0 offset:(unsigned long long *)a1 decoded:(BOOL)a2;
- (id)_copyHeaderValueForKey:(id)a0;
- (id)_headerValueForKey:(id)a0;
- (void)_appendHeaderKey:(id)a0 value:(id)a1 toData:(id)a2;
- (void)_appendAddedHeaderKey:(id)a0 value:(id)a1 toData:(id)a2;
- (void)mergeHeaders:(id)a0;
- (void)setAddressListForReplyTo:(id)a0;

@end
