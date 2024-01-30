@class PKPrinter;

@interface UIPrintInfoRequest : NSObject {
    PKPrinter *_printer;
}

@property (nonatomic) int requestState;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)requestInfoForPrinter:(id)a0;

- (void).cxx_destruct;
- (void)requestPrintInfo;

@end
