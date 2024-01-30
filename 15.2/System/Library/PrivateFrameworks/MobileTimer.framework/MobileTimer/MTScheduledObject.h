@class NSString, MTTrigger;
@protocol MTScheduleable;

@interface MTScheduledObject : NSObject <NAEquatable, NSCopying>

@property (copy, nonatomic) id<MTScheduleable> scheduleable;
@property (copy, nonatomic) MTTrigger *trigger;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scheduledObjectForScheduleable:(id)a0 trigger:(id)a1;
+ (unsigned long long)scheduledTypeForTriggerType:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScheduleable:(id)a0 trigger:(id)a1;
- (BOOL)isEqualToScheduledObject:(id)a0;

@end
