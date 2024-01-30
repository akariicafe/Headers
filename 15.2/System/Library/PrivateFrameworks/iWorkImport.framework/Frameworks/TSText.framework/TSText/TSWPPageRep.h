@class NSString;

@interface TSWPPageRep : TSDContainerRep <CALayerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFromLayout;

@end
