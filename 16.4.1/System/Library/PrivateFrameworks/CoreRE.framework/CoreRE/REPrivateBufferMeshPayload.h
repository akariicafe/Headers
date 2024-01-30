@class NSArray, RESerializedPayload, NSData;
@protocol MTLBuffer;

@interface REPrivateBufferMeshPayload : RESharedResourcePayload <REMeshPayload> {
    NSData *_data;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<MTLBuffer> buffer;
@property (readonly, nonatomic) NSArray *parts;
@property (readonly, nonatomic) NSArray *models;
@property (readonly, nonatomic) NSArray *instances;
@property (readonly, nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic, getter=isShareable) BOOL shareable;
@property (copy, nonatomic) id /* block */ serializedDataBlock;
@property (retain, nonatomic) RESerializedPayload *serializedData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)bufferWithDevice:(id)a0;
- (id)initWithBuffer:(id)a0 parts:(id)a1 models:(id)a2 instances:(id)a3;

@end
