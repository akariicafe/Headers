@protocol REMSaveRequestTrackedValue;

@interface REMSaveRequestTrackedValueContainer : NSObject

@property (weak, nonatomic) id<REMSaveRequestTrackedValue> weakValue;
@property (retain, nonatomic) id<REMSaveRequestTrackedValue> template;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (id)valueForSaveRequest:(id)a0;
- (id)valueWithoutPerformingCopy;

@end
