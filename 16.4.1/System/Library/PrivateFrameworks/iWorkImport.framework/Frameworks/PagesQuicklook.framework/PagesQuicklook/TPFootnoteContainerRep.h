@class NSString, NSObject;
@protocol TSDContainerInfo;

@interface TPFootnoteContainerRep : TSDContainerRep <TSWPRepParent>

@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)directlyManagesLayerContent;
- (BOOL)p_hasContent;

@end
