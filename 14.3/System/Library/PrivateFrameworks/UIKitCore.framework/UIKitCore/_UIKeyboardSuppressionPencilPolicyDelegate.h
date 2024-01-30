@class NSString;

@interface _UIKeyboardSuppressionPencilPolicyDelegate : NSObject <_UIKeyboardSuppressionPolicyDelegate> {
    BOOL _isQueryingLocaleIdentifier;
}

@property (nonatomic) BOOL _suppressLocaleIdentifier;
@property (copy, nonatomic) NSString *_overrideLocaleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_shouldSuppressForDelegate:(id)a0;
- (id)_recognitionLocaleIdentifier;

@end
