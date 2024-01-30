@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (long long)int64Value;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (unsigned long long)category;
- (unsigned long long)scalarType;
- (unsigned long long)unsignedInt64Value;
- (double)doubleValue;
- (unsigned long long)privacy;
- (unsigned short)rawBytesLength;
- (id)_numValue;
- (id)objectRepresentation;
- (void).cxx_destruct;
- (const void *)rawBytes;
- (long double)longDoubleValue;
- (unsigned long long)scalarCategory;
- (unsigned long long)availability;

@end
