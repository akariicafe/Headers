@interface TKBERTLVRecord : TKTLVRecord

+ (id)dataForTag:(unsigned long long)a0;
+ (id)zuluDateFormatter;
+ (id)parseFromDataSource:(id)a0;
+ (unsigned long long)encodeNumber:(unsigned long long)a0 into:(char *)a1;

- (id)propertyList;
- (id)initWithPropertyList:(id)a0;
- (id)initWithTag:(unsigned long long)a0 records:(id)a1;
- (id)initWithTag:(unsigned long long)a0 value:(id)a1;

@end
