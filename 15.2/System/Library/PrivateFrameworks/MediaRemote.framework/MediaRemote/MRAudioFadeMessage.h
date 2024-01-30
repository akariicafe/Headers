@class MRPlayerPath;

@interface MRAudioFadeMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) long long fadeType;

- (id)initWithPlayerPath:(id)a0 fadeType:(long long)a1;
- (unsigned long long)type;

@end
