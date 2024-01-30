@interface BPSCountWindowMetadata : NSObject <BPSWindowMetadata>

@property (readonly, nonatomic) unsigned long long currentCount;

- (id)init;
- (id)initWithCurrentCount:(unsigned long long)a0;

@end
