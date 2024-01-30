@class NSString, WACoarseLocationStatus;

@interface WACoarseLocationData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) WACoarseLocationStatus *status;

- (id)toDict;
- (id)initWithStatus:(id)a0;
- (void).cxx_destruct;

@end
