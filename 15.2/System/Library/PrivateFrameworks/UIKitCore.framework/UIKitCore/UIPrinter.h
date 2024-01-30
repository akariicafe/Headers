@class NSArray, NSURL, NSString;

@interface UIPrinter : NSObject {
    id _printerInfo;
}

@property (readonly) NSArray *supportedPresets;
@property (readonly) NSArray *supportedTrays;
@property (readonly) NSArray *supportedPapers;
@property (readonly) NSArray *loadedPapers;
@property (readonly) NSArray *supportedMediaTypes;
@property (readonly) NSArray *supportedQualities;
@property (readonly) NSArray *printerFinishingOptions;
@property (readonly) NSArray *finishingTemplates;
@property (readonly) NSArray *outputBins;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *displayLocation;
@property (readonly) long long supportedJobTypes;
@property (readonly, copy) NSString *makeAndModel;
@property (readonly) BOOL supportsColor;
@property (readonly) BOOL supportsDuplex;

+ (id)printerWithURL:(id)a0;

- (id)_printerID;
- (id)_initWithPrinter:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_internalPrinter;
- (void)contactPrinter:(id /* block */)a0;
- (id)_initWithURL:(id)a0;
- (long long)jobAccountIDSupport;
- (BOOL)supportsJobAccountID;

@end
