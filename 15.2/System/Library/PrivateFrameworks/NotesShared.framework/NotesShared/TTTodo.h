@class NSUUID;

@interface TTTodo : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL done;

- (id)serialize;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)saveToArchive:(void *)a0;
- (id)initWithIdentifier:(id)a0 done:(BOOL)a1;
- (id)todoWithDone:(BOOL)a0;

@end
