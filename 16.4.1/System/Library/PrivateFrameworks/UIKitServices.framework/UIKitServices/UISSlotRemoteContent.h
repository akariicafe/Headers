@class NSString;

@interface UISSlotRemoteContent : NSObject <NSSecureCoding, UISSlotAnyContent> {
    unsigned char _contentScale;
    struct CGSize { double width; double height; } _contentSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int slotID;
@property (readonly, nonatomic) unsigned char contentScale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) BOOL shouldReplaceExistingContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newLayerContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (void)deleteFromLayerContext:(id)a0;
- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 contentScale:(unsigned char)a1 localImage:(struct CGImage { } *)a2 toLayerContext:(id *)a3;
- (id)newTouchAuthenticationSpecificationWithAuthenticationMessageContext:(unsigned long long)a0 backgroundStatisticsRegion:(struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; })a1 backgroundStatisticsForeground:(float)a2 backgroundStatisticsPassingContrast:(float)a3 backgroundStatisticsFailingContrast:(float)a4 hitTestInformationMask:(unsigned long long)a5 secureName:(unsigned int)a6;
- (void)transferFromLayerContext:(id)a0 toLayerContextWithId:(unsigned long long)a1;

@end
