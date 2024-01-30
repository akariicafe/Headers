@class NSString, NSMutableDictionary, IDSGFTMetricsAnonymizer, NSDictionary;

@interface IDSGFTMetricsReferencePoint : NSObject {
    NSMutableDictionary *_times;
    IDSGFTMetricsAnonymizer *_anonymizer;
    NSDictionary *_template;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy) NSString *fromType;
@property (copy) id fromUniqueID;

- (id)description;
- (void).cxx_destruct;
- (void)event:(id)a0 uniqueID:(id)a1;
- (id)collectForTimeBase:(double)a0 anonymize:(BOOL)a1;
- (void)event:(id)a0;
- (void)event:(id)a0 time:(double)a1;
- (void)event:(id)a0 uniqueID:(id)a1 reason:(id)a2;
- (void)event:(id)a0 uniqueID:(id)a1 reason:(id)a2 time:(double)a3;
- (void)event:(id)a0 uniqueID:(id)a1 time:(double)a2;
- (id)initWithFromType:(id)a0 fromUniqueID:(id)a1 anonymizer:(id)a2 template:(id)a3;
- (id)instanceForID:(id)a0;
- (double)referenceTimeForTimeBase:(double)a0;

@end
