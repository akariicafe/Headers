@class NSString, INImage;

@interface INImageNoteContent : INNoteContent <INCacheableContainer, INImageProxyInjecting, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic, setter=_setImage:) INImage *image;

- (id)initWithImage:(id)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithImage:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
