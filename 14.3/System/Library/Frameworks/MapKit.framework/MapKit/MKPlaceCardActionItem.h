@class UIColor, NSString, NSArray, _MKMapItemAttribution;

@interface MKPlaceCardActionItem : NSObject

@property (readonly, copy, nonatomic) NSString *displayString;
@property (copy, nonatomic) NSString *glyph;
@property (retain, nonatomic) UIColor *glyphColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL selected;
@property (readonly, nonatomic) NSArray *urlStrings;
@property (retain, nonatomic) _MKMapItemAttribution *attribution;
@property (retain, nonatomic) MKPlaceCardActionItem *selectedItem;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 displayString:(id)a1 enabled:(BOOL)a2;
- (id)initWithType:(unsigned long long)a0 displayString:(id)a1 enabled:(BOOL)a2 urlStrings:(id)a3 attribution:(id)a4;

@end
