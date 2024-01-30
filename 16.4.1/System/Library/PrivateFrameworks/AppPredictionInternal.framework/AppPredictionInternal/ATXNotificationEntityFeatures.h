@class NSMutableArray;

@interface ATXNotificationEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSMutableArray *secondsToEngagement;

- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (id)init;
- (void).cxx_destruct;

@end
