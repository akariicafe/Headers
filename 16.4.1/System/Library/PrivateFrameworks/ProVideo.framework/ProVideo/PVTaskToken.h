@class PVTaskTokenPool;

@interface PVTaskToken : NSObject

@property (nonatomic) BOOL returned;
@property (readonly, weak, nonatomic) PVTaskTokenPool *pool;
@property (readonly, nonatomic) unsigned long long tokenId;

- (void)returnToPool;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPool:(id)a0 tokenId:(unsigned long long)a1;

@end
