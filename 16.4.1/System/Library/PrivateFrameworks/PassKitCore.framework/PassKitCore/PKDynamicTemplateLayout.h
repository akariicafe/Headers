@class NSString, NSMutableDictionary;

@interface PKDynamicTemplateLayout : NSObject {
    NSMutableDictionary *_layoutStrings;
    NSMutableDictionary *_layoutImages;
    NSMutableDictionary *_layoutLinks;
}

@property (readonly, nonatomic) NSString *templateIdentifier;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)layoutImages;
- (void)_initWithLayoutDictionary:(id)a0;
- (id)anyLayoutImageNamed:(id)a0;
- (id)anyLayoutLinkNamed:(id)a0;
- (id)anyLayoutStringNamed:(id)a0;
- (id)layoutImageNamed:(id)a0 passingTest:(id /* block */)a1;
- (id)layoutLinkNamed:(id)a0 passingTest:(id /* block */)a1;
- (id)layoutLinks;
- (id)layoutStringNamed:(id)a0 passingTest:(id /* block */)a1;
- (id)layoutStrings;

@end
