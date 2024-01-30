@class NSString, NSMutableDictionary;

@interface CTCapability : NSObject

@property (retain, nonatomic) NSString *capabilityName;
@property BOOL capabilityFetched;
@property BOOL enabledFetched;
@property (retain) NSMutableDictionary *capability;
@property (copy) NSMutableDictionary *capabilityInfo;
@property (retain) NSMutableDictionary *enabledDict;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)getCapabilityForSlotID:(long long)a0;
- (BOOL)getCapabilityInfo:(id)a0 forSlotID:(long long)a1;
- (BOOL)getEnabledForSlotID:(long long)a0;
- (id)initWithCapabilityName:(id)a0;
- (void)setCapabilityInfo:(id)a0 forSlotID:(long long)a1;
- (void)setCapable:(BOOL)a0 forSlotID:(long long)a1;
- (void)setEnabled:(BOOL)a0 forSlotID:(long long)a1;
- (id)slotNum:(long long)a0;

@end
