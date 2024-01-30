@class NSNumber;

@interface ATXAppEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSNumber *appCategoryScore;
@property (retain, nonatomic) NSNumber *appCategoryScore_v2;

- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (id)init;

@end
