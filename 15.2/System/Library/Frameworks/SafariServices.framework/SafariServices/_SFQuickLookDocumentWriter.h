@class NSString, _SFQuickLookDocument, NSObject;
@protocol OS_dispatch_queue;

@interface _SFQuickLookDocumentWriter : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_filePathAccessedOnDispatchQueue;
}

@property (copy, nonatomic) NSString *filePathAccessedOnDispatchQueue;
@property (readonly, nonatomic) _SFQuickLookDocument *quickLookDocument;
@property (readonly, nonatomic) BOOL hasFinishedWriting;

- (void).cxx_destruct;
- (id)initWithFileName:(id)a0 uti:(id)a1;
- (void)writeDataAndClose:(id)a0 completionHandler:(id /* block */)a1;

@end
