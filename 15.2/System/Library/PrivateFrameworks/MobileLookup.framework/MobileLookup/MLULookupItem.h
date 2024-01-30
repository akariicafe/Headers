@class NSString, NSDictionary, NSURL, NSArray, MLULookupItemContent;

@interface MLULookupItem : NSObject {
    NSURL *_url;
    struct __DDResult { } *_ddResult;
    NSString *_text;
    struct _NSRange { unsigned long long location; unsigned long long length; } _focusRange;
    NSArray *_attachments;
    unsigned long long _currentAttachmentIndex;
    struct _NSRange { unsigned long long location; unsigned long long length; } _proposedRange;
    BOOL _resolved;
}

@property (retain, nonatomic) MLULookupItemContent *previewContent;
@property (retain) NSDictionary *documentProperties;

- (BOOL)resolve;
- (void)commitWithTransitionForPreviewViewController:(id)a0 inViewController:(id)a1 completion:(id /* block */)a2;
- (void)commit;
- (unsigned long long)commitType;
- (void).cxx_destruct;
- (id)viewControllerToPresent;
- (id)initWithURL:(id)a0 dataDetectorsResult:(struct __DDResult { } *)a1 text:(id)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)initWithAttachments:(id)a0 currentAttachment:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)_resolveURL:(id)a0 DDResult:(struct __DDResult { } *)a1 focusRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)_resolveAttachments:(id)a0 currentAttachmentIndex:(unsigned long long)a1;
- (BOOL)_resolveText:(id)a0 focusRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)webUrlToPresent;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })proposedRange;

@end
