@class CACRecordedUserActionFlow, NSString, NSDictionary;

@interface CACRecordedUserAction : NSObject <NSSecureCoding> {
    long long _type;
    NSString *_identifier;
    NSDictionary *_targetAttributes;
    BOOL _canIgnoreFailure;
    id _object;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL isSpokenCommand;
@property (readonly) BOOL isReplayableGesture;
@property (readonly) BOOL canIgnoreFailure;
@property (weak) CACRecordedUserActionFlow *ownerFlow;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)plistDescription;
- (void).cxx_destruct;
- (BOOL)isSpokenCommand;
- (id)_derivedTargetAttributesFromSpokenCommand:(id)a0;
- (id)_dictionaryFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_labeledElementsFromMatchingCriteria:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectFromDictionary:(id)a0;
- (void)beginExecutingWithCompletionBlock:(id /* block */)a0;
- (BOOL)canIgnoreFailure;
- (id)initWithSpokenCommand:(id)a0;
- (BOOL)isReplayableGesture;
- (id)spokenCommand;

@end
