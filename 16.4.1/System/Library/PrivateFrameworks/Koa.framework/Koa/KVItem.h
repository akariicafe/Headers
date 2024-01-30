@class NSData, NSString;

@interface KVItem : NSObject <KVJSONEncodable, KVJSONDecodable> {
    const struct Item { unsigned char x0[1]; } *_item;
}

@property (readonly, nonatomic) NSData *buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemFromBuffer:(id)a0 error:(id *)a1;

- (long long)itemType;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)itemId;
- (BOOL)isEqualToItem:(id)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0;
- (id)initWithBuffer:(id)a0 verify:(BOOL)a1 copy:(BOOL)a2 error:(id *)a3;
- (void)enumerateFieldsWithLocaleType:(long long)a0 usingBlock:(id /* block */)a1;
- (id)JSONWithIndent:(unsigned char)a0;
- (id)fieldsWithType:(long long)a0;
- (unsigned long long)fieldCount;
- (BOOL)hasFieldWithType:(long long)a0 label:(id)a1 value:(id)a2;
- (id)initFromDictionary:(id)a0 error:(id *)a1;

@end
