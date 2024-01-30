@interface NSAKSerializer : NSObject {
    id ss;
}

- (unsigned long long)serializeString:(id)a0;
- (unsigned long long)serializeObject:(id)a0;
- (unsigned long long)serializePListValueIn:(id)a0 key:(id)a1 value:(id)a2;
- (unsigned long long)serializePListKeyIn:(id)a0 key:(id)a1 value:(id)a2;
- (unsigned long long)serializeData:(id)a0;
- (unsigned long long)serializeList:(id)a0;
- (id)initForSerializerStream:(id)a0;
- (id)serializerStream;
- (unsigned long long)serializePropertyList:(id)a0;
- (unsigned long long)serializeListItemIn:(id)a0 at:(unsigned long long)a1;
- (void)dealloc;

@end
