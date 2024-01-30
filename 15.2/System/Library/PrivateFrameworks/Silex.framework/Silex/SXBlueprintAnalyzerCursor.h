@class NSArray, NSMutableArray;

@interface SXBlueprintAnalyzerCursor : NSObject {
    double _highestMaxY;
    NSArray *_path;
    NSMutableArray *_mutablePath;
}

- (void).cxx_destruct;
- (id)init;

@end
