@protocol BPSWindowMetadata, NSCopying;

@interface BPSWindowerInput : NSObject

@property (readonly, nonatomic) id aggregate;
@property (readonly, nonatomic) id<NSCopying> key;
@property (readonly, nonatomic) id<BPSWindowMetadata> metadata;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAggregate:(id)a0 key:(id)a1 metadata:(id)a2;

@end
