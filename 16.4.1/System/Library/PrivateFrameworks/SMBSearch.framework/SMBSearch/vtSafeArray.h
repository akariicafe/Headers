@class safeArrayBound, NSArray;

@interface vtSafeArray : NSObject

@property unsigned short cDims;
@property unsigned short fFeatures;
@property unsigned int cbElementSize;
@property (retain) safeArrayBound *rgsBoundArr;
@property (retain) NSArray *vData;

- (void).cxx_destruct;
- (id)initWithArray:(id)a0 ElementSize:(unsigned int)a1;

@end
