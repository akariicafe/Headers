@class LPCaptionButtonPresentationProperties, LPCaptionPresentationProperties;

@interface LPCaptionRowPresentationProperties : NSObject {
    LPCaptionPresentationProperties *_leading;
    LPCaptionPresentationProperties *_trailing;
}

@property (readonly, nonatomic) BOOL hasAnyContent;
@property (readonly, retain, nonatomic) LPCaptionPresentationProperties *leading;
@property (readonly, retain, nonatomic) LPCaptionPresentationProperties *trailing;
@property (retain, nonatomic) LPCaptionButtonPresentationProperties *button;

- (void).cxx_destruct;
- (id)init;
- (id)right;
- (id)left;
- (void)applyToAllCaptions:(id /* block */)a0;

@end
