@class NSUUID;

@interface PRItem : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *productUUID;
@property (readonly, nonatomic) BOOL isOwned;
@property (readonly, nonatomic) BOOL requiresLowerRangingFrequency;

+ (id)itemWithUUID:(id)a0 productUUID:(id)a1 isOwned:(BOOL)a2 requiresLowerRangingFrequency:(BOOL)a3;
+ (id)itemWithUUID:(id)a0 productUUID:(id)a1 isOwned:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 productUUID:(id)a1 isOwned:(BOOL)a2 requiresLowerRangingFrequency:(BOOL)a3;
- (id)initWithUUID:(id)a0 productUUID:(id)a1 isOwned:(BOOL)a2;

@end
