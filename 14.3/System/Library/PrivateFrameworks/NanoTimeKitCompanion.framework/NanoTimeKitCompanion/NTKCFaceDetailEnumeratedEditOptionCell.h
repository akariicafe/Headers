@class NTKEditOption;

@interface NTKCFaceDetailEnumeratedEditOptionCell : NTKCDetailTableViewCell

@property (readonly, nonatomic) NTKEditOption *editOption;
@property (nonatomic) BOOL active;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (double)rowHeight;
- (id)initWithEditOption:(id)a0;

@end
