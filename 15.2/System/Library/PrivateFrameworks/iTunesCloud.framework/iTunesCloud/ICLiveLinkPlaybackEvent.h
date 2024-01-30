@interface ICLiveLinkPlaybackEvent : NSObject

@property (readonly, nonatomic) long long kind;

- (id)description;
- (id)initWithKind:(long long)a0;

@end
