@class NSString;

@interface DBSDisplayZoomMode : NSObject

@property (readonly, nonatomic) unsigned long long displayZoomOption;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (void).cxx_destruct;
- (id)initWithDisplayZoomOption:(unsigned long long)a0 localizedName:(id)a1 size:(struct CGSize { double x0; double x1; })a2;

@end
