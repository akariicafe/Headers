@class NSString, NSDictionary;

@interface EMCoreAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *data;

- (void).cxx_destruct;
- (id)initWithEventName:(id)a0 collectionData:(id)a1;

@end
