@class NSNumber, NSData, NSDictionary;

@interface CATActiveIDSServiceConnectionContentSendData : NSObject <CATActiveIDSServiceConnectionMessageContent> {
    struct _NSRange { unsigned long long location; unsigned long long length; } mSegmentRange;
    NSData *mUnderlyingDataSegment;
}

@property (readonly, nonatomic) NSNumber *sequenceNumber;
@property (readonly, nonatomic) unsigned long long dataNumber;
@property (readonly, nonatomic) unsigned long long segmentNumber;
@property (readonly, nonatomic) unsigned long long totalSegments;
@property (readonly, copy, nonatomic) NSData *dataSegment;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithSequenceNumber:(id)a0 dataNumber:(unsigned long long)a1 dataSegment:(id)a2 segmentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 segmentNumber:(unsigned long long)a4 totalSegments:(unsigned long long)a5;

@end
