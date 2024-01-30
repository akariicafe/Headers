@class NSMutableArray;

@interface ATXNotificationEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSMutableArray *secondsToEngagement;

- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (id)init;

@end
