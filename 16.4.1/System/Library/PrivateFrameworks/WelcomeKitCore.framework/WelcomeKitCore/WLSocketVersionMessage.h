@interface WLSocketVersionMessage : WLSocketMessage

@property (nonatomic) unsigned long long version;

- (id)initWithVersion:(unsigned long long)a0;

@end
