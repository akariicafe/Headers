@class NSDictionary;

@interface AMSUIDDynamicImpressionMetrics : NSObject {
    void /* unknown type, empty encoding */ custom;
    void /* unknown type, empty encoding */ fields;
}

@property (nonatomic, copy) NSDictionary *custom;
@property (nonatomic, copy) NSDictionary *fields;
@property (nonatomic, retain) void /* unknown type, empty encoding */ identifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 fields:(id)a1 custom:(id)a2;

@end
