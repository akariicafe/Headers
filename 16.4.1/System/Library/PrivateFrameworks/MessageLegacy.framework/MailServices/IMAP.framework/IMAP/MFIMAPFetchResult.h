@class NSArray, NSString, NSData, NSDate;

@interface MFIMAPFetchResult : NSObject {
    int _itemType;
    unsigned long long _modSequenceNumber;
    union { NSArray *envelope; NSDate *internalDate; unsigned long long messageSize; NSArray *bodyStructure; struct { NSString *section; unsigned long long startOffset; NSData *sectionData; } bodySectionInfo; unsigned int uid; unsigned long long uniqueRemoteId; struct { unsigned long long messageFlags; NSArray *customFlags; } flags; } _typeSpecific;
}

- (void)setUid:(unsigned int)a0;
- (unsigned int)encoding;
- (void)setSection:(id)a0;
- (unsigned int)uid;
- (unsigned long long)messageSize;
- (int)type;
- (id)initWithType:(int)a0;
- (unsigned long long)startOffset;
- (void)dealloc;
- (id)description;
- (id)section;
- (void)setMessageSize:(unsigned long long)a0;
- (id)fetchData;
- (void)setStartOffset:(unsigned long long)a0;
- (id)bodyStructure;
- (id)customFlagsArray;
- (id)envelope;
- (id)flagsArray;
- (id)internalDate;
- (unsigned long long)messageFlags;
- (unsigned long long)modSequenceNumber;
- (void)setBodyStructure:(id)a0;
- (void)setCustomFlagsArray:(id)a0;
- (void)setEnvelope:(id)a0;
- (void)setFetchData:(id)a0;
- (void)setFlagsArray:(id)a0;
- (void)setInternalDate:(id)a0;
- (void)setMessageFlags:(unsigned long long)a0;
- (void)setModSequenceNumber:(unsigned long long)a0;
- (void)setUniqueRemoteId:(unsigned long long)a0;
- (unsigned long long)uniqueRemoteId;

@end
