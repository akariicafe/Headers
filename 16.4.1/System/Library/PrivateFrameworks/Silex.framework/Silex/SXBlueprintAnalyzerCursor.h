@class NSArray, NSMutableArray;

@interface SXBlueprintAnalyzerCursor : NSObject {
    double _highestMaxY;
    NSArray *_path;
    NSMutableArray *_mutablePath;
}

- (id)init;
- (void).cxx_destruct;

@end
