@class HMDStreamDataSequenceNumber, NSString, HMDStreamData, NSMutableData, NSNumber;

@interface HMDStreamDataChunkAssembler : HMFObject

@property (readonly, copy) NSString *type;
@property (readonly, copy) NSMutableData *data;
@property (copy) NSNumber *currentSequenceNumber;
@property (copy) HMDStreamData *assembledData;
@property (readonly, copy) HMDStreamDataSequenceNumber *dataSequenceNumber;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)addDataChunk:(id)a0 error:(id *)a1;
- (id)initWithDataSequenceNumber:(id)a0 initialStreamDataChunk:(id)a1;
- (void)createAssembledDataIfNecessaryForDataChunk:(id)a0;

@end
