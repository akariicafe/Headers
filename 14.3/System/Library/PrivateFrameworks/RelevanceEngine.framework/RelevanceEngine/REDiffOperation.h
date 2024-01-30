@interface REDiffOperation : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long toIndex;
@property (readonly, nonatomic) long long fromIndex;
@property (readonly, nonatomic) id item;

+ (id)reloadWithItem:(id)a0 atIndex:(long long)a1;
+ (id)insertWithItem:(id)a0 atIndex:(long long)a1;
+ (id)deleteWithItem:(id)a0 atIndex:(long long)a1;
+ (id)moveWithItem:(id)a0 fromIndex:(long long)a1 toIndex:(long long)a2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)a0 item:(id)a1 toIndex:(long long)a2 fromIndex:(long long)a3;

@end
