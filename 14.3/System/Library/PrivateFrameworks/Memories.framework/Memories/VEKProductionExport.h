@class VEKExportController;

@interface VEKProductionExport : NSObject

@property (retain, nonatomic) VEKExportController *exportController;

- (void).cxx_destruct;
- (void)didFinishExport;
- (void)exportController:(id)a0 progressedTo:(float)a1 preventBackslide:(BOOL)a2;
- (void)exportWithPresets:(id)a0 progressHandler:(id /* block */)a1 project:(id)a2 title:(id)a3 subtitle:(id)a4 fontName:(id)a5 completionHandler:(id /* block */)a6;
- (void)_exportProject:(id)a0 presets:(id)a1 progressHandler:(id /* block */)a2 title:(id)a3 subtitle:(id)a4 fontName:(id)a5 completionHandler:(id /* block */)a6;

@end
