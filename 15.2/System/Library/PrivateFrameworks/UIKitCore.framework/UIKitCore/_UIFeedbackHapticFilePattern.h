@class NSURL, NSString;

@interface _UIFeedbackHapticFilePattern : _UIFeedback <_UIFeedbackFilePlayable_Internal, _UIFeedbackDiscretePlayable>

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;

+ (BOOL)supportsSecureCoding;
+ (id)feedbackPatternFromFile:(id)a0;
+ (id)type;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithFileURL:(id)a0;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
