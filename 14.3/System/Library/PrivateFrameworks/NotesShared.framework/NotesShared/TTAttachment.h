@class NSString;

@interface TTAttachment : NSObject <TTAttachment>

@property (retain, nonatomic) NSString *attachmentIdentifier;
@property (retain, nonatomic) NSString *attachmentUTI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAttachment:(id)a0 equalToModelComparable:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqualToModelComparable:(id)a0;
- (id)attachmentInContext:(id)a0;

@end
