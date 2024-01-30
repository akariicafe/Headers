@class ASFAsn1Token;

@interface ASFAsn1OSToken : ASFAsn1Token

@property (readonly) ASFAsn1Token *value;

- (id)stringValue;
- (id)_initWithID:(unsigned long long)a0 class:(unsigned char)a1 length:(unsigned long long)a2 content:(const char *)a3 opaque:(BOOL)a4;
- (void).cxx_destruct;

@end
