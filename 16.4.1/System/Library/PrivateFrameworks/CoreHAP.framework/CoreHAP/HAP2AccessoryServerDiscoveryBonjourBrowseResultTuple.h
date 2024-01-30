@class NSObject;
@protocol OS_nw_browse_result;

@interface HAP2AccessoryServerDiscoveryBonjourBrowseResultTuple : NSObject

@property (readonly, nonatomic) NSObject<OS_nw_browse_result> *previousResult;
@property (readonly, nonatomic) NSObject<OS_nw_browse_result> *currentResult;
@property (readonly, nonatomic) unsigned long long changes;

- (void).cxx_destruct;
- (id)initWithPreviousResult:(id)a0 currentResult:(id)a1 changes:(unsigned long long)a2;

@end
