@class AMSUIBubbleTipInlineAnchorInfo, ICQInlineTip, AMSUIMessageRequest;

@interface ICQUIInlineTipViewModel : NSObject

@property (readonly, copy, nonatomic) AMSUIMessageRequest *request;
@property (readonly, copy, nonatomic) AMSUIBubbleTipInlineAnchorInfo *tipArrow;
@property (readonly, copy, nonatomic) ICQInlineTip *tip;

- (void).cxx_destruct;
- (id)_tipTintColorName;
- (id)initWithInlineTip:(id)a0;

@end
