@class ASFAsn1Token;

@interface ASFAsn1OSToken : ASFAsn1Token

@property (readonly) ASFAsn1Token *value;

- (void).cxx_destruct;
- (id)_initWithID:(unsigned long long)a0 class:(unsigned char)a1 length:(unsigned long long)a2 content:(const char *)a3 opaque:(BOOL)a4;
- (id)stringValue;

@end
