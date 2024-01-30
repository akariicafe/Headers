@class MFMimePart, _MFSharedBufferedDataConsumer, MFMessage;
@protocol MFCollectingDataConsumer;

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
    id<MFCollectingDataConsumer> _headerConsumer;
    _MFSharedBufferedDataConsumer *_textConsumer;
    unsigned long long _nextByteToFetch;
    BOOL _receivedHeaders;
    BOOL _receivedText;
}

- (BOOL)isComplete;
- (id)initWithMessage:(id)a0;
- (id)data;
- (BOOL)partial;
- (id)message;
- (void).cxx_destruct;
- (void)_addSubdownloadForBodyTextWithCache:(id)a0;
- (id)_networkConverterWithConsumer:(id)a0 didReceiveData:(id /* block */)a1;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (BOOL)allowsPartialDownloads;
- (BOOL)fetchBodyData;
- (void)handleFetchResult:(id)a0;
- (BOOL)isSuccessful;
- (void)processResults;
- (void)setAllowsPartialDownloads:(BOOL)a0;
- (void)setFetchBodyData:(BOOL)a0;
- (void)setTopLevelPart:(id)a0;
- (id)topLevelPart;

@end
