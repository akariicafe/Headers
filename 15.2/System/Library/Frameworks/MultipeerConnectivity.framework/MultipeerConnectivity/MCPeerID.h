@class NSString, MCPeerIDInternal;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {
    MCPeerIDInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayName;

- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)pid64;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (unsigned int)pid;
- (id)initWithDisplayName:(id)a0;
- (id)displayNameAndPID;
- (id)idString;
- (id)initWithIDString:(id)a0 displayName:(id)a1;
- (id)internalDescription;
- (id)initWithPID:(unsigned int)a0 displayName:(id)a1;

@end
