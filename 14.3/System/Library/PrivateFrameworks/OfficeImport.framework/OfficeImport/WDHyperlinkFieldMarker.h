@class NSString;

@interface WDHyperlinkFieldMarker : WDFieldMarker

@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *fragment;
@property (nonatomic) unsigned char internalLink : 1;

- (void).cxx_destruct;
- (id)description;
- (int)runType;

@end
