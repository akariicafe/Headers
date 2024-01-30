@class NSData, NSString;

@interface _DPCMSSequenceMO : _DPCMSRecordMO

@property (retain, nonatomic) NSData *sequence;
@property (nonatomic) short sequenceHashIndex;
@property (retain, nonatomic) NSString *plainSequence;

@end
