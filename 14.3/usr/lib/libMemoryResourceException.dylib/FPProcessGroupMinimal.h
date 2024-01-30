@class NSMutableSet;

@interface FPProcessGroupMinimal : NSObject

@property (retain, nonatomic) NSMutableSet *processes;
@property (nonatomic) unsigned long long hashValue;

- (id)immutableCopy;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)addProcess:(id)a0;

@end
