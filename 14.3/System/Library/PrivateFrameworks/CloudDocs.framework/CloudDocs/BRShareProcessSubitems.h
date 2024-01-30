@class NSURL;

@interface BRShareProcessSubitems : BROperation {
    NSURL *_url;
    unsigned long long _processType;
}

@property (copy) id /* block */ processSubitemsCompletionBlock;
@property (nonatomic) unsigned long long maxSharedSubitemsBeforeFailure;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithURL:(id)a0 processType:(unsigned long long)a1;

@end
