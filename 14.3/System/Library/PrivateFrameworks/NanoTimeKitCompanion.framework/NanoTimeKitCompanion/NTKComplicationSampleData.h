@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface NTKComplicationSampleData : NSObject <NSSecureCoding> {
    NSMutableDictionary *_familyToTemplate;
    NSMutableSet *_supportedFamilies;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *clientID;
@property (copy) NSString *applicationID;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)supportedFamilies;
- (id)initWithSupportedFamilies:(id)a0;
- (id)templateForFamily:(long long)a0;
- (void)setTemplate:(id)a0 forFamily:(long long)a1;
- (id)loadedFamilies;

@end
