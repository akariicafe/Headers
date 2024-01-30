@class NSString;
@protocol HKSPSyncAnchor;

@interface HDSPSleepMessage : NSObject <HKSPDictionarySerializable>

@property (readonly, copy, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly, nonatomic) unsigned long long messageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSyncAnchor:(id)a0;

@end
