@class NSString, NSXPCConnection, NSLocale, NSCharacterSet;

@interface CHRemoteRecognizer : NSObject <CHRecognizing>

@property (readonly, nonatomic) NSXPCConnection *_connection;
@property (nonatomic) BOOL shouldUseTextReplacements;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) int recognitionMode;
@property (nonatomic) int contentType;
@property (nonatomic) int autoCapitalizationMode;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (retain, nonatomic) NSCharacterSet *activeCharacterSet;
@property (nonatomic) struct CGSize { double width; double height; } minimumDrawingSize;
@property (readonly, nonatomic) BOOL enableCachingIfAvailable;
@property (readonly, nonatomic) BOOL enableGen2ModelIfAvailable;
@property (readonly, nonatomic) BOOL enableGen2CharacterLMIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)maxRequestStrokeCountForLocale:(id)a0;
+ (long long)absoluteMaxStrokeCountPerRequest;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithMode:(int)a0 locale:(id)a1;
- (id)initWithMode:(int)a0 locale:(id)a1 recognizerOptions:(id)a2;
- (id)textRecognitionResultForDrawing:(id)a0 options:(id)a1 error:(id *)a2;
- (id)transcriptionPathsForTokenizedTextResult:(id)a0 withHistory:(id)a1 scores:(id *)a2 error:(id *)a3;
- (void)_teardownXPCConnection;
- (id)_recognitionRequestWithDrawing:(id)a0 options:(id)a1;
- (id)_recognitionResultForRequest:(id)a0 error:(id *)a1;
- (void)_setupXPCConnectionIfNeeded;
- (BOOL)isEqualToRemoteRecognizer:(id)a0;

@end
