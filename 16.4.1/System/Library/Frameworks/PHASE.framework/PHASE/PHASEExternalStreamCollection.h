@class NSUUID;

@interface PHASEExternalStreamCollection : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) long long streamType;
@property (readonly, nonatomic) unsigned long long streamCount;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStreamType:(long long)a0 count:(unsigned long long)a1;

@end
