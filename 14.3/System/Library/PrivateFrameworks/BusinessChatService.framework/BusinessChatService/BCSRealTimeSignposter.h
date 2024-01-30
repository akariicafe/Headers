@interface BCSRealTimeSignposter : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long signpostIdentifier;

- (id)_initWithType:(long long)a0 signpostIdentifier:(unsigned long long)a1;

@end
