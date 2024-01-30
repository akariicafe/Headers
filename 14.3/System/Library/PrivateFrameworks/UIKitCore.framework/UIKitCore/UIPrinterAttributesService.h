@class PKPrinter;

@interface UIPrinterAttributesService : NSObject {
    int _printerWarningPollTime;
    PKPrinter *_printer;
    id /* block */ _completionHandler;
}

+ (id)instance;

- (id)init;
- (void).cxx_destruct;
- (void)startPollForPrinterWarningStatus:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)pollForPrinterWarningStatus;
- (void)stopPrinterWarningPolling;

@end
