@interface NSAKDeserializer : NSObject {
    id ds;
}

- (id)deserializeListItemIn:(id)a0 at:(unsigned long long)a1 length:(unsigned long long)a2;
- (id)deserializePListValueIn:(id)a0 key:(id)a1 length:(unsigned long long)a2;
- (id)initForDeserializerStream:(id)a0;
- (id)deserializeData:(id)a0;
- (id)deserializeList:(id)a0;
- (id)deserializeNewString;
- (id)deserializeNewObject;
- (id)deserializePList:(id)a0;
- (id)deserializePListKeyIn:(id)a0;
- (id)deserializeNewData;
- (id)deserializeNewList;
- (id)deserializeString:(id)a0;
- (id)deserializerStream;
- (id)deserializeNewKeyString;
- (id)deserializeNewPList;
- (void)dealloc;

@end
