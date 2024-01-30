@class NSDictionary, NSNumber, NSString;

@interface HMHAPMetadata : NSObject <HMProtoBufMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSDictionary *hapChrMap;
@property (retain, nonatomic) NSDictionary *hapSvcMap;
@property (retain, nonatomic) NSDictionary *hapCategoryMap;
@property (retain) NSNumber *version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSharedInstance;

- (BOOL)shouldNotCacheCharacteristicOfType:(id)a0;
- (id)categoryForCategoryType:(id)a0;
- (id)categoryForNumber:(id)a0;
- (BOOL)applyProtoBufData:(id)a0;
- (void).cxx_destruct;
- (id)characteristicTypeDescription:(id)a0;
- (id)serviceTypeDescription:(id)a0;

@end
