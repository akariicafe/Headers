@class NSString;

@interface _SFOpenInOtherAppActivityViewController : _SFActivityViewController

@property (retain, nonatomic) NSString *filePath;

+ (BOOL)canOpenWithFilePath:(id)a0 UTI:(id)a1 sourceURL:(id)a2;
+ (id)_applicationsForDocumentProxy:(id)a0;
+ (id)_activityItemsForFilePath:(id)a0 UTI:(id)a1 sourceURL:(id)a2;

- (void)_prepareActivity:(id)a0;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 UTI:(id)a1 sourceURL:(id)a2;

@end
