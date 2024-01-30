@class NSData;

@interface MRRemoteTextInputMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSData *data;

- (id)initWithVersion:(unsigned long long)a0 data:(id)a1;
- (unsigned long long)type;

@end
