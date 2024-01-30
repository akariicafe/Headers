@class NSMutableArray, NSArray, NSDictionary, SSMetricsPageEvent, NSDate, SSMetricsConfiguration, NSString;

@interface SSLookupResponse : NSObject <SSXPCCoding> {
    NSMutableArray *_itemOrder;
    NSDictionary *_response;
}

@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic, setter=_setMetricsPageEvent:) SSMetricsPageEvent *metricsPageEvent;
@property (readonly, nonatomic) NSArray *allItems;
@property (readonly, nonatomic) SSMetricsConfiguration *metricsConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResponseDictionary:(id)a0;
- (id)appStoreURLWithReason:(long long)a0 initialIndex:(long long)a1;
- (id)itemForKey:(id)a0;
- (id)valueForProperty:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)initWithLocationResponseDictionary:(id)a0;
- (void)dealloc;
- (void)_enumerateItemsWithBlock:(id /* block */)a0;

@end
