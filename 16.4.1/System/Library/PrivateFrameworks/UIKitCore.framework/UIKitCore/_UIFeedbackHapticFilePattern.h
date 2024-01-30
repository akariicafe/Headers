@class NSURL, NSString;

@interface _UIFeedbackHapticFilePattern : _UIFeedback <_UIFeedbackFilePlayable_Internal, _UIFeedbackDiscretePlayable>

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;

+ (BOOL)supportsSecureCoding;
+ (id)type;
+ (id)feedbackPatternFromFile:(id)a0;

- (id)initWithFileURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_effectivePlayableFeedbackTypes;

@end
