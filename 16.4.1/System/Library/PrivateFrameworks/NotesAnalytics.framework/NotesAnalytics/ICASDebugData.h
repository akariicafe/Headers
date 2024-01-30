@class NSString;

@interface ICASDebugData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *name;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)toDict;

@end
