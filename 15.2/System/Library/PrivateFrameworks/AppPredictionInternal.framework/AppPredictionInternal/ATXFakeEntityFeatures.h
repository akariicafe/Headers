@class NSMutableArray;

@interface ATXFakeEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSMutableArray *identifiersAndDates;

- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (id)init;

@end
