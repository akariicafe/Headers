@class MKPlaceSectionRowView;

@interface MKPlaceInfoRow : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) MKPlaceSectionRowView *rowView;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL showIcon;

+ (id)infoRow:(id)a0 ofType:(unsigned long long)a1;

- (void).cxx_destruct;

@end
