@class NSString, NSMapTable, NSURLSession;

@interface SiriUIURLSession : NSObject <NSURLSessionDataDelegate> {
    NSURLSession *_URLSession;
    NSMapTable *_tasksForClient;
    NSMapTable *_imageDownloadForTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedURLSession;

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)imageTaskWithHTTPGetRequest:(id)a0 client:(id)a1 fitToSize:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (id)imageTaskWithHTTPGetRequest:(id)a0 client:(id)a1 fitToSize:(struct CGSize { double x0; double x1; })a2 fillColor:(id)a3 completionHandler:(id /* block */)a4;
- (id)imageTaskWithHTTPGetRequest:(id)a0 client:(id)a1 fitToSize:(struct CGSize { double x0; double x1; })a2 fillColor:(id)a3 userAgent:(id)a4 completionHandler:(id /* block */)a5;
- (id)imageTaskWithHTTPGetRequest:(id)a0 client:(id)a1 fitToSize:(struct CGSize { double x0; double x1; })a2 incremental:(BOOL)a3 progressHandler:(id /* block */)a4 fillColor:(id)a5 userAgent:(id)a6;
- (void)_registerTask:(id)a0 forClient:(id)a1;
- (void)_unregisterTask:(id)a0 forClient:(id)a1;
- (id)imageTaskWithHTTPGetRequest:(id)a0 client:(id)a1 completionHandler:(id /* block */)a2;
- (id)imageTaskWithHTTPGetRequest:(id)a0 client:(id)a1 fitToSize:(struct CGSize { double x0; double x1; })a2 incremental:(BOOL)a3 progressHandler:(id /* block */)a4 fillColor:(id)a5;
- (void)cancelAllTasksForClient:(id)a0;

@end
