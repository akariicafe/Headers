@class NSString;

@interface WBSHistoryServiceURLCompletionMatchEntry : NSObject <NSSecureCoding> {
    struct unique_ptr<SafariShared::_HistoryStreamedMatchEntry, std::__1::default_delete<SafariShared::_HistoryStreamedMatchEntry> > { struct __compressed_pair<SafariShared::_HistoryStreamedMatchEntry *, std::__1::default_delete<SafariShared::_HistoryStreamedMatchEntry> > { struct _HistoryStreamedMatchEntry *__value_; } __ptr_; } _streamData;
    NSString *_url;
    NSString *_title;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) float topSitesScore;
@property (readonly, nonatomic) struct _HistoryStreamedMatchEntry { struct { unsigned int x0; unsigned int x1; } x0; char *x1; char *x2; float x3; } *streamData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStreamData:(struct unique_ptr<SafariShared::_HistoryStreamedMatchEntry, std::__1::default_delete<SafariShared::_HistoryStreamedMatchEntry> > { struct __compressed_pair<SafariShared::_HistoryStreamedMatchEntry *, std::__1::default_delete<SafariShared::_HistoryStreamedMatchEntry> > { struct _HistoryStreamedMatchEntry *x0; } x0; } *)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithURLString:(id)a0 title:(id)a1 topSitesScore:(float)a2;
- (void)encodeWithCoder:(id)a0;

@end
