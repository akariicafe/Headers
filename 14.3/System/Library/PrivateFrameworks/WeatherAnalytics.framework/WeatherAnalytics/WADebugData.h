@class NSString;

@interface WADebugData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *name;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
