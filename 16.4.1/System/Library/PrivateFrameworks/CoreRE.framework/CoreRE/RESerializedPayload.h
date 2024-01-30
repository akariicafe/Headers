@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface RESerializedPayload : RESharedResourcePayload

@property (readonly, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *blobData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTypeName:(id)a0 serializedBytes:(const void *)a1 size:(unsigned long long)a2 blobBytes:(const void *)a3 size:(unsigned long long)a4;

@end
