@class NSSet, NSDictionary, NSError;

@interface HMBCloudZoneRecordPushResult : HMFObject

@property (readonly, nonatomic) NSSet *updated;
@property (readonly, nonatomic) NSSet *deleted;
@property (readonly, nonatomic) NSDictionary *partialErrors;
@property (readonly, nonatomic) NSDictionary *conflicts;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL fatalError;

+ (id)pushResultByMergingPushResult:(id)a0 withPushResult:(id)a1;

- (void).cxx_destruct;
- (id)initWithUpdated:(id)a0 deleted:(id)a1 conflicts:(id)a2 partialErrors:(id)a3 fatalError:(BOOL)a4 error:(id)a5;
- (id)initWithUpdated:(id)a0 deleted:(id)a1 conflicts:(id)a2 error:(id)a3;

@end
