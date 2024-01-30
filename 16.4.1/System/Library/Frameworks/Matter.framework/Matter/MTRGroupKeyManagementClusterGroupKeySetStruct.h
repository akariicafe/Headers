@class NSNumber, NSData;

@interface MTRGroupKeyManagementClusterGroupKeySetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupKeySetID;
@property (copy, nonatomic) NSNumber *groupKeySecurityPolicy;
@property (copy, nonatomic) NSData *epochKey0;
@property (copy, nonatomic) NSNumber *epochStartTime0;
@property (copy, nonatomic) NSData *epochKey1;
@property (copy, nonatomic) NSNumber *epochStartTime1;
@property (copy, nonatomic) NSData *epochKey2;
@property (copy, nonatomic) NSNumber *epochStartTime2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
