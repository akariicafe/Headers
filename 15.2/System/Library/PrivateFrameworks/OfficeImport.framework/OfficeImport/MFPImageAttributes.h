@class NSMutableDictionary;

@interface MFPImageAttributes : NSObject {
    NSMutableDictionary *mColorAdjustMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)colorAdjustWithType:(int)a0;
- (id)ensureColorAdjustWithType:(int)a0;

@end
