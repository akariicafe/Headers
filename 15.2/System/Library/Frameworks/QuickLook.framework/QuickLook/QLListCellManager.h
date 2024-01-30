@class NSMutableDictionary, NSString, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface QLListCellManager : NSObject <QLListCellDataGenerationOperationDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) NSMutableDictionary *operations;
@property (retain, nonatomic) NSOperationQueue *generationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupCell:(id)a0 withItem:(id)a1 atIndex:(unsigned long long)a2;
- (void)operation:(id)a0 didGenerateThumbnail:(id)a1;
- (void)operation:(id)a0 didDetermineFileSize:(id)a1 fileTypeString:(id)a2;
- (void)_operationDidFinish:(id)a0;

@end
