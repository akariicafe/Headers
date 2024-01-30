@class NSString, NSNumber;

@interface ICASStreamUpdateData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *hasUpdates;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithHasUpdates:(id)a0;

@end
