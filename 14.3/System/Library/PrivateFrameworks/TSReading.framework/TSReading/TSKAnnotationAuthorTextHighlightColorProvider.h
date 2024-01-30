@class NSString, TSKAnnotationAuthor;

@interface TSKAnnotationAuthorTextHighlightColorProvider : NSObject <TSKCGColorProvider> {
    TSKAnnotationAuthor *mAnnotationAuthor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGColor { } *)cgColor;
- (void)dealloc;
- (id)initWithAnnotationAuthor:(id)a0;

@end
