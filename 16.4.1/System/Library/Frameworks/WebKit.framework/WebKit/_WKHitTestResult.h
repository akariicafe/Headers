@class NSURL, NSString;

@interface _WKHitTestResult : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::HitTestResult> { struct type { unsigned char __lx[296]; } data; } _hitTestResult;
}

@property (readonly, copy, nonatomic) NSURL *absoluteImageURL;
@property (readonly, copy, nonatomic) NSURL *absolutePDFURL;
@property (readonly, copy, nonatomic) NSURL *absoluteLinkURL;
@property (readonly, copy, nonatomic) NSURL *absoluteMediaURL;
@property (readonly, copy, nonatomic) NSString *linkLabel;
@property (readonly, copy, nonatomic) NSString *linkTitle;
@property (readonly, copy, nonatomic) NSString *lookupText;
@property (readonly, nonatomic, getter=isContentEditable) BOOL contentEditable;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } elementBoundingBox;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
