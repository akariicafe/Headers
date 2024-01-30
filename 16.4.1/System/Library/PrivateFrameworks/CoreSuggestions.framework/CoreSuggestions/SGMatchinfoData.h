@class NSNumber, NSData;

@interface SGMatchinfoData : NSObject

@property (readonly, nonatomic) NSNumber *entityId;
@property (readonly, nonatomic) NSNumber *detailEntityId;
@property (readonly, nonatomic) NSData *matchinfoData;

+ (id)matchinfoDataWithEntityId:(id)a0 detailEntityId:(id)a1;
+ (id)matchinfoDataWithEntityId:(id)a0 detailEntityId:(id)a1 matchinfoData:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMatchinfoDataWithEntityId:(id)a0 detailEntityId:(id)a1 matchinfoData:(id)a2;
- (BOOL)isEqualToMatchinfoData:(id)a0;

@end
