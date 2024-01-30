@class NSArray, NSDictionary, UITextPasteCoordinator, NSItemProvider, NSString;

@interface UITextPasteItem : NSObject <UITextPasteItem>

@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) id localObject;
@property (retain, nonatomic) NSDictionary *defaultAttributes;
@property (readonly, nonatomic) UITextPasteCoordinator *coordinator;
@property (retain, nonatomic) NSArray *supportedPasteConfigurationClasses;
@property (nonatomic) BOOL forcesDefaultAttributes;
@property (copy, nonatomic) NSDictionary *documentOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTextPasteCoordinator:(id)a0;
- (void)setAttachmentResult:(id)a0;
- (void)setAttributedStringResult:(id)a0;
- (void)setDefaultResult;
- (void)setNoResult;
- (void)setStringResult:(id)a0;

@end
