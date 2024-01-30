@class NSString;

@interface TTAttachment : NSObject <TTAttachment>

@property (copy, nonatomic) NSString *attachmentIdentifier;
@property (copy, nonatomic) NSString *attachmentUTI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAttachment:(id)a0 equalToModelComparable:(id)a1;
+ (BOOL)isInlineAttachment:(id)a0;
+ (BOOL)typeUTIIsInlineAttachment:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attachmentInContext:(id)a0;
- (id)inlineAttachmentInContext:(id)a0;
- (BOOL)isEqualToModelComparable:(id)a0;

@end
