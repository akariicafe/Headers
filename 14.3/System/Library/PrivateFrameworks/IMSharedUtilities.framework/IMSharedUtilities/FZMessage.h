@interface FZMessage : IMMessageItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)a0;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
