@class CHTextInputQueryItem, PKDrawing;

@interface PKTextInputDebugRecordingLogEntry : PKTextInputDebugLogEntry

@property (retain, nonatomic) CHTextInputQueryItem *_resultQueryItem;
@property (retain, nonatomic) PKDrawing *_originalDrawing;

+ (id)_dictionaryRepresentationForDrawing:(id)a0 detailLevel:(long long)a1 containsInProgress:(BOOL)a2;
+ (id)_dictionaryRepresentationForTarget:(id)a0;
+ (id)_dictionaryRepresentationForTargetContentInfo:(id)a0 elementType:(id)a1 detailLevel:(long long)a2 contentLevel:(long long)a3 resultAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 localeIdentifiers:(id)a5;

- (void).cxx_destruct;
- (void)_extractDataFromResultCommand:(id)a0;
- (id)dictionaryRepresentationWithDetailLevel:(long long)a0 targetContentLevel:(long long)a1;
- (id)initWithResultCommand:(id)a0;
- (id)inputDrawing;

@end
