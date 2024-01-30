@class PKPrinter;

@interface UIPrinterAttributesService : NSObject {
    long long _printerWarningPollTime;
    PKPrinter *_printer;
    id /* block */ _completionHandler;
}

+ (id)instance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pollForPrinterWarningStatus;
- (void)startPollForPrinterWarningStatus:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopPrinterWarningPolling;

@end
