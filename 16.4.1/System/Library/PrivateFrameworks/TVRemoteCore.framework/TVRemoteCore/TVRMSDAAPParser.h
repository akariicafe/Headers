@interface TVRMSDAAPParser : NSObject

+ (id)sharedInstance;
+ (id)objectWithData:(id)a0;
+ (id)objectWithData:(id)a0 error:(id *)a1;
+ (id)typeForDRCPValueType:(int)a0;

- (id)parseUTF8String:(const char *)a0 length:(unsigned int)a1;
- (void)setBool:(const char *)a0 size:(unsigned int)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setDate:(const char *)a0 size:(unsigned int)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setFloat32:(const char *)a0 size:(unsigned int)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setSInt16:(const char *)a0 size:(unsigned int)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setSInt8:(const char *)a0 size:(unsigned int)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setString:(const char *)a0 size:(unsigned int)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setUInt16:(const char *)a0 size:(unsigned int)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setUInt32:(const char *)a0 size:(unsigned int)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setUInt64:(const char *)a0 size:(unsigned int)a1 inDict:(id)a2 forKey:(id)a3;
- (void)setUInt8:(const char *)a0 size:(unsigned int)a1 inDict:(id)a2 forKey:(id)a3;
- (void)enumerateDAAPChunksInBytes:(const char *)a0 length:(unsigned int)a1 usingBlock:(id /* block */)a2;
- (id)parseBrowseResults:(const char *)a0 length:(unsigned int)a1;
- (id)parseContentCodes:(const char *)a0 length:(unsigned int)a1;
- (id)parseContentCollectionDict:(const char *)a0 length:(unsigned int)a1;
- (id)parseControlPromptCollection:(const char *)a0 length:(unsigned int)a1;
- (id)parseControlPromptResponse:(const char *)a0 length:(unsigned int)a1;
- (id)parseDACPPropertyResponse:(const char *)a0 length:(unsigned int)a1;
- (id)parseGetSpeakersResponse:(const char *)a0 length:(unsigned int)a1;
- (id)parseListingCollection:(const char *)a0 length:(unsigned int)a1 capacity:(int)a2 sectionHeaders:(id *)a3;
- (id)parseListingHeader:(const char *)a0 length:(unsigned int)a1;
- (id)parseListingItem:(const char *)a0 length:(unsigned int)a1;
- (id)parseLogin:(const char *)a0 length:(unsigned int)a1;
- (id)parseMACAddressListing:(const char *)a0 length:(unsigned int)a1;
- (id)parseQueueSectionItems:(const char *)a0 length:(unsigned int)a1;
- (id)parseServerInfo:(const char *)a0 length:(unsigned int)a1;
- (id)parseUnicodeCharacter:(const char *)a0 length:(unsigned int)a1;
- (id)parseXMLContent:(const char *)a0 length:(unsigned int)a1;
- (id)processResponseCode:(unsigned int)a0 bytes:(const char *)a1 length:(unsigned int)a2;
- (void)unknownChunk:(struct RSDAAPChunk { struct RSDAAPChunkHeader { unsigned int x0; unsigned int x1; } x0; char *x1; })a0;

@end
