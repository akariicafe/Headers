@interface HMDStructuredReader : HMDStructuredDataStream

@property (readonly) long long tokenType;

+ (id)readerFromObjectWithExtendedTypes:(id)a0;
+ (id)extendedTypeReaderWithReader:(id)a0;
+ (id)readerFromObject:(id)a0;

- (void)endArray;
- (unsigned long long)beginArray;
- (id)readDate;
- (void)endDictionary;
- (id)readData;
- (id)readString;
- (unsigned long long)beginDictionary;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (void)readNull;
- (BOOL)readBoolean;
- (id)readNumber;
- (id)readUUID;
- (id)readLogicalValueAsObject;
- (void)copyLogicalValueToWriter:(id)a0;
- (void)skipLogicalValue;
- (id)readDictionaryKey;
- (void)skipToken;

@end
