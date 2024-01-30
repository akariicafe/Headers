@class BKSEventFocusDeferralProperties;

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BKSEventFocusDeferralProperties *properties;
@property (readonly, nonatomic) BKSEventFocusDeferralProperties *deferredProperties;
@property (readonly, nonatomic) int priority;
@property (readonly, nonatomic) BOOL isCycle;

- (void).cxx_destruct;
- (BOOL)defersProperties:(id)a0;
- (id)initWithProperties:(id)a0 deferredProperties:(id)a1;
- (id)deferredPropertiesForProperties:(id)a0;
- (id)initWithProperties:(id)a0 deferredProperties:(id)a1 withPriority:(int)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)conciseDescription;
- (void)encodeWithCoder:(id)a0;

@end
