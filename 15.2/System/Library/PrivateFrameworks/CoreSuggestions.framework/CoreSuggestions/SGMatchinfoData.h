@class NSNumber, NSData;

@interface SGMatchinfoData : NSObject

@property (readonly, nonatomic) NSNumber *entityId;
@property (readonly, nonatomic) NSNumber *detailEntityId;
@property (readonly, nonatomic) NSData *matchinfoData;

+ (id)matchinfoDataWithEntityId:(id)a0 detailEntityId:(id)a1 matchinfoData:(id)a2;
+ (id)matchinfoDataWithEntityId:(id)a0 detailEntityId:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithMatchinfoDataWithEntityId:(id)a0 detailEntityId:(id)a1 matchinfoData:(id)a2;
- (BOOL)isEqualToMatchinfoData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
