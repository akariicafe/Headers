@class BKSEventFocusDeferralProperties;

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BKSEventFocusDeferralProperties *properties;
@property (readonly, nonatomic) BKSEventFocusDeferralProperties *deferredProperties;
@property (readonly, nonatomic) int priority;
@property (readonly, nonatomic) BOOL isCycle;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)conciseDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)deferredPropertiesForProperties:(id)a0;
- (BOOL)defersProperties:(id)a0;
- (id)initWithProperties:(id)a0 deferredProperties:(id)a1;
- (id)initWithProperties:(id)a0 deferredProperties:(id)a1 withPriority:(int)a2;

@end
