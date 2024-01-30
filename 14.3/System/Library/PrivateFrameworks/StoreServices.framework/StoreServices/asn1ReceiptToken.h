@class NSString, asn1Token;

@interface asn1ReceiptToken : NSObject

@property (readonly) unsigned long long type;
@property (readonly) unsigned long long typeVersion;
@property (readonly) asn1Token *contentToken;
@property (readonly) NSString *stringValue;
@property (readonly) unsigned long long integerValue;

+ (id)readFromBuffer:(const char *)a0;

- (unsigned long long)integerValue;
- (void)dealloc;
- (id)description;
- (id)stringValue;
- (id)_initWithType:(unsigned long long)a0 typeVersion:(unsigned long long)a1 contentToken:(id)a2;

@end
