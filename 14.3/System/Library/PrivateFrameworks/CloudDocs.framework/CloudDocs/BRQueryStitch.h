@class NSURL, NSArray, BRFileObjectID;

@interface BRQueryStitch : NSObject {
    BRFileObjectID *_objid;
    char _kind;
    NSURL *_url;
}

@property (retain, nonatomic) NSURL *fromURL;
@property (retain, nonatomic) NSArray *contexts;

- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
- (void)_deletionDone;
- (void)_creationDone;
- (void)_renameDone;
- (id)initWithURL:(id)a0 objid:(id)a1 kind:(char)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setQueries:(id)a0;
- (id)description;
- (void)done;

@end
