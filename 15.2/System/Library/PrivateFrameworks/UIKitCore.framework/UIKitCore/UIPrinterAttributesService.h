@class PKPrinter;

@interface UIPrinterAttributesService : NSObject {
    int _printerWarningPollTime;
    PKPrinter *_printer;
    id /* block */ _completionHandler;
}

+ (id)instance;

- (void)startPollForPrinterWarningStatus:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stopPrinterWarningPolling;
- (void)pollForPrinterWarningStatus;
- (void)dealloc;

@end
