@interface HDQueryServerClientState : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int applicationState;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithApplicationState:(unsigned int)a0;

@end
