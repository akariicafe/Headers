@class NSString, HKSourceDataModel, HKDevice;

@interface WDSource : NSObject

@property (readonly, nonatomic) HKSourceDataModel *sourceModel;
@property (readonly, nonatomic) HKDevice *device;
@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0 device:(id)a1;

@end
