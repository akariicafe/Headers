@class NSString, ASFAsn1Token;

@interface ASFAsn1ReceiptToken : NSObject

@property (readonly) ASFAsn1Token *contentToken;
@property (readonly) unsigned long long integerValue;
@property (readonly) NSString *stringValue;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long typeVersion;

+ (id)readFromBuffer:(const char *)a0;

- (unsigned long long)integerValue;
- (void).cxx_destruct;
- (id)description;
- (id)stringValue;
- (id)_initWithType:(unsigned long long)a0 typeVersion:(unsigned long long)a1 contentToken:(id)a2;
- (BOOL)contentIsAnInteger;

@end
