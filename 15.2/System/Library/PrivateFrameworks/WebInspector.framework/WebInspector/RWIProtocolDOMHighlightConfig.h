@class RWIProtocolDOMRGBAColor;

@interface RWIProtocolDOMHighlightConfig : RWIProtocolJSONObject

@property (nonatomic) BOOL showInfo;
@property (retain, nonatomic) RWIProtocolDOMRGBAColor *contentColor;
@property (retain, nonatomic) RWIProtocolDOMRGBAColor *paddingColor;
@property (retain, nonatomic) RWIProtocolDOMRGBAColor *borderColor;
@property (retain, nonatomic) RWIProtocolDOMRGBAColor *marginColor;

@end
