@class NSString, ICASSwitchSelectionContext;

@interface ICASSwitchSelectionContextData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASSwitchSelectionContext *switchSelectionContext;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSwitchSelectionContext:(id)a0;

@end
