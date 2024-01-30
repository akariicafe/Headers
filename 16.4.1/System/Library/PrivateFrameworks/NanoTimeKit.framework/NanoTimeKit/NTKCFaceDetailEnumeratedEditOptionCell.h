@class NTKEditOption;

@interface NTKCFaceDetailEnumeratedEditOptionCell : NTKCDetailTableViewCell

@property (readonly, nonatomic) NTKEditOption *editOption;
@property (nonatomic) BOOL active;

+ (id)reuseIdentifier;

- (double)rowHeight;
- (void).cxx_destruct;
- (id)initWithEditOption:(id)a0;

@end
