@class NSUUID;

@interface NTKFaceCollectionUpdate : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) id /* block */ block;

+ (id)updateWithType:(long long)a0 uuid:(id)a1 block:(id /* block */)a2;

- (void).cxx_destruct;

@end
