@class NSDictionary, NSString;

@interface HMDCoreDuetLogEventData : NSObject

@property (readonly, copy) NSDictionary *metadata;
@property (readonly, copy) NSString *value;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 value:(id)a1;

@end
