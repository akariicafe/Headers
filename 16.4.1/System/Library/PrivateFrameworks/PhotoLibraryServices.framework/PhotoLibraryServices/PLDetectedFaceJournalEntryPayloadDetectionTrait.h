@class NSDictionary, NSString;

@interface PLDetectedFaceJournalEntryPayloadDetectionTrait : NSObject <PLDetectionTraitRebuildDescription>

@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) short value;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSDictionary *payloadAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPayloadAttributes:(id)a0;

@end
