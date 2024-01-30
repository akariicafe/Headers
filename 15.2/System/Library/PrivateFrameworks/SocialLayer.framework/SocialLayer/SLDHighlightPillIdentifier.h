@class UISSlotStyle, SLDPillSlotTag;

@interface SLDHighlightPillIdentifier : NSObject

@property (retain, nonatomic) UISSlotStyle *style;
@property (retain, nonatomic) SLDPillSlotTag *tag;

+ (id)identifierForStyle:(id)a0 tag:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithStyle:(id)a0 tag:(id)a1;

@end
