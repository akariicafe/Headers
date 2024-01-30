@class NSData;

@interface MRRemoteTextInputMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSData *data;

- (unsigned long long)type;
- (id)initWithVersion:(unsigned long long)a0 data:(id)a1;

@end
