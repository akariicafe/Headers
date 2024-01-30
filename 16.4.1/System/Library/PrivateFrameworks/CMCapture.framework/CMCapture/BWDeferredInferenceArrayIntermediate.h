@class NSString;

@interface BWDeferredInferenceArrayIntermediate : BWDeferredArrayIntermediate

@property (readonly, nonatomic) NSString *inferenceAttachmentKey;
@property (readonly, nonatomic) NSString *portType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithArray:(id)a0 tag:(id)a1 inferenceAttachmentKey:(id)a2 portType:(id)a3 URL:(id)a4;

@end
