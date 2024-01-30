@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (double)doubleValue;
- (long long)int64Value;
- (void).cxx_destruct;
- (const void *)rawBytes;
- (unsigned long long)availability;
- (unsigned long long)privacy;
- (unsigned long long)category;
- (id)objectRepresentation;
- (unsigned short)rawBytesLength;
- (unsigned long long)scalarCategory;
- (unsigned long long)scalarType;
- (unsigned long long)unsignedInt64Value;
- (long double)longDoubleValue;
- (id)_numValue;
- (id)initWithDict:(id)a0 metadata:(id)a1;

@end
