@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (id)initWithDict:(id)a0 metadata:(id)a1;
- (const void *)rawBytes;
- (long long)int64Value;
- (unsigned long long)unsignedInt64Value;
- (double)doubleValue;
- (id)objectRepresentation;
- (unsigned short)rawBytesLength;
- (unsigned long long)availability;
- (id)_numValue;
- (long double)longDoubleValue;
- (unsigned long long)privacy;
- (unsigned long long)scalarType;
- (unsigned long long)category;
- (unsigned long long)scalarCategory;
- (void).cxx_destruct;

@end
