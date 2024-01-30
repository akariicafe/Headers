@class NSString;

@interface WKPreviewAction : UIPreviewAction <WKPreviewActionItem>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithIdentifier:(id)a0 title:(id)a1 style:(long long)a2 handler:(id /* block */)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
