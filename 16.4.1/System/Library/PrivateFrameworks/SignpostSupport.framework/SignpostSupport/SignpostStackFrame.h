@class NSUUID;

@interface SignpostStackFrame : NSObject

@property (readonly, nonatomic) NSUUID *symbolOwnerUUID;
@property (readonly, nonatomic) unsigned long long offset;

- (id)initWithArrayRepresentation:(id)a0;
- (id)_serializableArrayRepresentation;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 offset:(unsigned long long)a1;
- (void).cxx_destruct;

@end
