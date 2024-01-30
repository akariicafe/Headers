@class PKTool;
@protocol PKPaletteTool;

@interface PKToolFromPaletteTool : NSObject {
    id<PKPaletteTool> _paletteTool;
}

@property (readonly, nonatomic) PKTool *tool;

- (void).cxx_destruct;
- (id)initWithPaletteTool:(id)a0;

@end
