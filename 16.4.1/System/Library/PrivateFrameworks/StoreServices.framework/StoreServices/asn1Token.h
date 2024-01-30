@interface asn1Token : NSObject

@property (readonly) unsigned char tokenClass;
@property (readonly) unsigned long long identifier;
@property (readonly) unsigned long long length;
@property (readonly) const char *content;

+ (id)readOpaqueTokenFromBuffer:(const char *)a0;
+ (id)readTokenFromBuffer:(const char *)a0;
+ (id)readTokenFromBuffer:(const char *)a0 opaque:(BOOL)a1;

- (id)description;
- (id)_initWithID:(unsigned long long)a0 class:(unsigned char)a1 length:(unsigned long long)a2 content:(const char *)a3 opaque:(BOOL)a4;

@end
