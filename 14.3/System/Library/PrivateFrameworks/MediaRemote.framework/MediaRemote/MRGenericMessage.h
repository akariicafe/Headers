@class NSString, NSData;

@interface MRGenericMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSData *data;

- (id)initWithKey:(id)a0 data:(id)a1;
- (unsigned long long)type;

@end
