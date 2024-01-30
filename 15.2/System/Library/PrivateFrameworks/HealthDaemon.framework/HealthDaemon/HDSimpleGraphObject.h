@interface HDSimpleGraphObject : NSObject

@property (readonly, nonatomic) long long rowID;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithRowID:(long long)a0;

@end
