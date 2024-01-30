@class NSString;

@interface WDHyperlinkFieldMarker : WDFieldMarker

@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *fragment;
@property (nonatomic) unsigned char internalLink : 1;

- (id)description;
- (void).cxx_destruct;
- (int)runType;

@end
