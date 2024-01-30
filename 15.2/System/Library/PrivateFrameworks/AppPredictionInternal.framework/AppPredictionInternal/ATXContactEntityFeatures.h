@interface ATXContactEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (nonatomic) BOOL isFavoriteContact;
@property (nonatomic) BOOL isVIPContact;

- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;

@end
