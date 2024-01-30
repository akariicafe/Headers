@class HMHome, NAFuture;

@interface HUSoftwareUpdateFetchItem : HFItem

@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture;

+ (id)_dateFormatter;

- (void).cxx_destruct;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHome:(id)a0 softwareUpdateFetchFuture:(id)a1;

@end
