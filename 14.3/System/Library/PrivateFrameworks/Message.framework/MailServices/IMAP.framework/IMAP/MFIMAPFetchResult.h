@class NSArray, NSString, NSData, NSDate;

@interface MFIMAPFetchResult : NSObject {
    int _itemType;
    unsigned long long _modSequenceNumber;
    union { NSArray *envelope; NSDate *internalDate; unsigned long long messageSize; NSArray *bodyStructure; struct { NSString *section; unsigned long long startOffset; NSData *sectionData; } bodySectionInfo; unsigned int uid; unsigned long long uniqueRemoteId; struct { unsigned long long messageFlags; NSArray *customFlags; } flags; } _typeSpecific;
}

- (void)setUid:(unsigned int)a0;
- (void)setSection:(id)a0;
- (unsigned int)uid;
- (id)section;
- (unsigned int)encoding;
- (void)dealloc;
- (unsigned long long)startOffset;
- (id)initWithType:(int)a0;
- (unsigned long long)messageFlags;
- (unsigned long long)uniqueRemoteId;
- (void)setUniqueRemoteId:(unsigned long long)a0;
- (void)setMessageFlags:(unsigned long long)a0;
- (id)description;
- (id)envelope;
- (int)type;
- (void)setMessageSize:(unsigned long long)a0;
- (id)fetchData;
- (void)setStartOffset:(unsigned long long)a0;
- (unsigned long long)modSequenceNumber;
- (void)setModSequenceNumber:(unsigned long long)a0;
- (unsigned long long)messageSize;
- (void)setFlagsArray:(id)a0;
- (id)internalDate;
- (id)customFlagsArray;
- (id)flagsArray;
- (id)bodyStructure;
- (void)setEnvelope:(id)a0;
- (void)setInternalDate:(id)a0;
- (void)setFetchData:(id)a0;
- (void)setBodyStructure:(id)a0;
- (void)setCustomFlagsArray:(id)a0;

@end
