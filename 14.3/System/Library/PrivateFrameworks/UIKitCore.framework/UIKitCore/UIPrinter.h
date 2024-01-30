@class NSURL, NSString;

@interface UIPrinter : NSObject {
    id _printerInfo;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *displayLocation;
@property (readonly) long long supportedJobTypes;
@property (readonly, copy) NSString *makeAndModel;
@property (readonly) BOOL supportsColor;
@property (readonly) BOOL supportsDuplex;

+ (id)printerWithURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithPrinter:(id)a0;
- (id)_initWithURL:(id)a0;
- (id)_internalPrinter;
- (void)contactPrinter:(id /* block */)a0;

@end
