@class NSURL, NSString;

@interface _GEOPlaceDataPhotoInfo : NSObject <GEOMapItemPhotoInfo>

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 width:(double)a1 height:(double)a2;

@end
