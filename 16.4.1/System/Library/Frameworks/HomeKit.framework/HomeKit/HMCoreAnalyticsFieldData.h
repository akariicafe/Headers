@class NSString, NSObject;

@interface HMCoreAnalyticsFieldData : HMFObject

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSObject *value;

- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
