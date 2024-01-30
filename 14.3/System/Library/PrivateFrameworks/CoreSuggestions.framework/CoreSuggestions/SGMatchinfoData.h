@class NSNumber, NSData;

@interface SGMatchinfoData : NSObject

@property (readonly, nonatomic) NSNumber *entityId;
@property (readonly, nonatomic) NSNumber *detailEntityId;
@property (readonly, nonatomic) NSData *matchinfoData;

+ (id)matchinfoDataWithEntityId:(id)a0 detailEntityId:(id)a1 matchinfoData:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToMatchinfoData:(id)a0;
- (id)initWithMatchinfoDataWithEntityId:(id)a0 detailEntityId:(id)a1 matchinfoData:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
