@class NSString, SXJSONObjectMerger;

@interface SXTextContrastDarkModePolicyException : NSObject <SXDarkModePolicyException>

@property (readonly, nonatomic) SXJSONObjectMerger *componentStyleMerger;
@property (readonly, nonatomic) SXJSONObjectMerger *componentTextStyleMerger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)componentStyleForComponent:(id)a0 DOM:(id)a1;
- (long long)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)a0 DOM:(id)a1;
- (long long)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)a0 DOM:(id)a1;
- (id)componentTextStyleForButtonComponent:(id)a0 DOM:(id)a1;
- (id)componentTextStyleForTextComponent:(id)a0 DOM:(id)a1;
- (id)initWithComponentStyleMerger:(id)a0 componentTextStyleMerger:(id)a1;
- (id)mergedComponentTextStyleWithIdentifiers:(id)a0 DOM:(id)a1;
- (id)opaqueComponentStyleForComponent:(id)a0 DOM:(id)a1;

@end
