@class NSString;

@interface WKEmbeddedView : UIView <WKContentControlled>

@property (readonly, nonatomic) unsigned long long embeddedViewID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEmbeddedViewID:(unsigned long long)a0;

@end
