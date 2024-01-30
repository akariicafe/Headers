@class NSData, NSString;

@interface _DPCMSWordMO : _DPCMSSequenceMO

@property (retain, nonatomic) NSData *fragment;
@property (nonatomic) short fragmentHashIndex;
@property (nonatomic) short fragmentPosition;
@property (retain, nonatomic) NSString *plainFragment;

@end
