@class NSString;

@interface FCNewsPersonalizationTrainingBias : NSObject

@property (retain, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSString *feedType;
@property (retain, nonatomic) NSString *groupType;
@property (nonatomic) double bias;
@property (readonly, nonatomic) NSString *identifier;

+ (id)identifierForEventType:(id)a0 feedType:(id)a1 groupType:(id)a2;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
