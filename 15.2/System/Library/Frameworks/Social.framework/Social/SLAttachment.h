@class NSString, NSItemProvider, UIImage, NSURL;

@interface SLAttachment : NSObject <NSSecureCoding> {
    id /* block */ _previewUpdateObserver;
    id /* block */ _payloadUpdateObserver;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long downsampleStatus;
@property (nonatomic) BOOL startedPayloadLoad;
@property (nonatomic) BOOL needsAnotherPreviewGeneration;
@property long long previewType;
@property (retain, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) id payload;
@property (copy, nonatomic) NSURL *payloadSourceFileURL;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) long long itemProviderPreviewType;

+ (BOOL)attachmentTypeRepresentsAnImage:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_uniqueIdentifier;
- (id)initWithPayload:(id)a0 type:(long long)a1 previewImage:(id)a2;
- (void)setPreviewUpdateObserverWithBlock:(id /* block */)a0;
- (void)setPayloadUpdateObserverWithBlock:(id /* block */)a0;

@end
