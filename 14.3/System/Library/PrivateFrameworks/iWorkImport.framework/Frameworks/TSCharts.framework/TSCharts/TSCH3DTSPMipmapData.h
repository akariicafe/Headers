@class TSPData, TSCH3DTSPImageDataTexture;

@interface TSCH3DTSPMipmapData : NSObject <TSCHUnretainedParent> {
    TSCH3DTSPImageDataTexture *mParent;
}

@property (readonly, nonatomic) TSPData *data;

+ (id)dataWithTSPData:(id)a0;

- (void)dealloc;
- (void)setParent:(id)a0;
- (void)clearParent;
- (id)databuffer;
- (id)initWithTSPData:(id)a0;

@end
