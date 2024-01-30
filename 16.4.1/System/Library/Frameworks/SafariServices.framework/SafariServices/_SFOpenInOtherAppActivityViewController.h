@class NSString;

@interface _SFOpenInOtherAppActivityViewController : _SFActivityViewController

@property (retain, nonatomic) NSString *filePath;

+ (id)_activityItemsForFilePath:(id)a0 UTI:(id)a1 sourceURL:(id)a2;
+ (id)_applicationsForDocumentProxy:(id)a0;
+ (BOOL)canOpenWithFilePath:(id)a0 UTI:(id)a1 sourceURL:(id)a2;

- (void).cxx_destruct;
- (void)_prepareActivity:(id)a0;
- (id)initWithFilePath:(id)a0 UTI:(id)a1 sourceURL:(id)a2;

@end
