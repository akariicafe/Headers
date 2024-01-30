@class MFMimePart, MFMessage;
@protocol MFDataConsumer, MFCollectingDataConsumer;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload {
    MFMessage *_message;
    MFMimePart *_topLevelPart;
    unsigned char _allowsPartialDownloads : 1;
    unsigned char _usingPartialDownloads : 1;
    unsigned char _startedFetch : 1;
    unsigned char _fetchingMessageContents : 1;
    unsigned char _fetchingBodyText : 1;
    unsigned char _doneAddingSubdownloads : 1;
    unsigned char _fetchBodyData : 1;
    id<MFDataConsumer> _headerFilter;
    id<MFCollectingDataConsumer> _headerConsumer;
    id<MFDataConsumer> _textFilter;
    id<MFCollectingDataConsumer> _textConsumer;
}

- (id)data;
- (void)dealloc;
- (id)topLevelPart;
- (BOOL)isComplete;
- (id)message;
- (id)initWithMessage:(id)a0;
- (BOOL)partial;
- (void)setTopLevelPart:(id)a0;
- (BOOL)allowsPartialDownloads;
- (void)setAllowsPartialDownloads:(BOOL)a0;
- (void)setFetchBodyData:(BOOL)a0;
- (void)handleFetchResult:(id)a0;
- (void)processResults;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (BOOL)fetchBodyData;

@end
