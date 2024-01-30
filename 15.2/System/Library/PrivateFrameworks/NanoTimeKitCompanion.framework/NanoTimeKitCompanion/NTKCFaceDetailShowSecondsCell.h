@class NTKEditOptionCollection;

@interface NTKCFaceDetailShowSecondsCell : NTKCFaceDetailToggleCell

@property (readonly, nonatomic) NTKEditOptionCollection *collection;
@property (readonly, nonatomic) long long mode;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;

@end
