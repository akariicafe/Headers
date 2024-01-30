@class NSMutableArray;

@interface ATXFakeEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSMutableArray *identifiersAndDates;

- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (id)init;
- (void).cxx_destruct;

@end
