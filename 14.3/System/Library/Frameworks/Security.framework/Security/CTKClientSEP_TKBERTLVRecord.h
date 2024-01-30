@interface CTKClientSEP_TKBERTLVRecord : CTKClientSEP_TKTLVRecord

+ (unsigned long long)encodeNumber:(unsigned long long)a0 into:(char *)a1;
+ (id)zuluDateFormatter;
+ (id)dataForTag:(unsigned long long)a0;
+ (id)parseFromDataSource:(id)a0;

- (id)propertyList;
- (id)initWithPropertyList:(id)a0;
- (id)initWithTag:(unsigned long long)a0 value:(id)a1;
- (id)initWithTag:(unsigned long long)a0 records:(id)a1;

@end
