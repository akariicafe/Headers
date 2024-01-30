@class MRPlayerPath;

@interface MRAudioFadeMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) long long fadeType;

- (unsigned long long)type;
- (id)initWithPlayerPath:(id)a0 fadeType:(long long)a1;

@end
