@class NSUUID, NSString, NSArray, NSAttributedString, NSMutableDictionary, NSDictionary, RTIInputSourceState, TIKeyboardOutput, NSMutableArray, RTIStyledIntermediateText, TIKeyboardIntermediateText, NSObject;
@protocol NSSecureCoding;

@interface RTITextOperations : NSObject <NSSecureCoding, RTICustomDataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *attributedPlaceholders;
@property (readonly, nonatomic) NSMutableDictionary *mutableAttributedPlaceholders;
@property (retain, nonatomic) NSMutableArray *fileHandles;
@property (retain, nonatomic) NSMutableArray *typeIdentifiers;
@property (retain, nonatomic) NSMutableArray *imageUserInfos;
@property (readonly, nonatomic) TIKeyboardOutput *keyboardOutput;
@property (retain, nonatomic) TIKeyboardIntermediateText *intermediateText;
@property (retain, nonatomic) RTIStyledIntermediateText *styledIntermediateText;
@property (copy, nonatomic) NSString *textToAssert;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectionRangeToAssert;
@property (nonatomic) SEL editingActionSelector;
@property (retain, nonatomic) NSArray *multilingualLanguages;
@property (retain, nonatomic) RTIInputSourceState *inputSourceState;
@property (retain, nonatomic) NSString *customInfoType;
@property (retain, nonatomic) NSObject<NSSecureCoding> *customInfo;
@property (readonly, nonatomic) NSUUID *targetSessionUUID;
@property (readonly, nonatomic) NSAttributedString *attributedInsertionText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textCheckingAnnotationRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textCheckingReplacementRange;
@property (copy, nonatomic) NSAttributedString *textCheckingAnnotatedString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textCheckingAnnotationRemovalRange;
@property (copy, nonatomic) NSString *textCheckingAnnotationToRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customInfoDictionary;
+ (void)registerCustomInfoClasses:(id)a0 forType:(id)a1;
+ (void)unregisterCustomInfoType:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)insertAttributedText:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateImagesAndUserInfosUsingBlock:(id /* block */)a0;
- (void)insertImageWithFileHandle:(id)a0 typeIdentifier:(id)a1 imageUserInfo:(id)a2;
- (void)_createAttributedPlaceholdersIfNecessary;
- (void)enumerateImagesUsingBlock:(id /* block */)a0;
- (id)initWithTargetSessionUUID:(id)a0;
- (void)insertAttributedText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertImageWithFileHandle:(id)a0 typeIdentifier:(id)a1;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
