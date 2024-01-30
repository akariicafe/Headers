@interface NSAKDeserializer : NSObject {
    id ds;
}

- (void)dealloc;
- (id)deserializePListValueIn:(id)a0 key:(id)a1 length:(unsigned long long)a2;
- (id)deserializeListItemIn:(id)a0 at:(unsigned long long)a1 length:(unsigned long long)a2;
- (id)deserializeNewString;
- (id)deserializeNewObject;
- (id)deserializePListKeyIn:(id)a0;
- (id)deserializeNewKeyString;
- (id)initForDeserializerStream:(id)a0;
- (id)deserializeList:(id)a0;
- (id)deserializePList:(id)a0;
- (id)deserializeNewPList;
- (id)deserializeNewData;
- (id)deserializeNewList;
- (id)deserializeString:(id)a0;
- (id)deserializerStream;
- (id)deserializeData:(id)a0;

@end
