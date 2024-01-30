@class NSString, FBSDisplayConfiguration, NSDate, NSMutableArray;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding>

@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long displayBacklightLevel;
@property (readonly, copy, nonatomic) NSMutableArray *elements;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)addElement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })referenceBounds;
- (id)_initWithElements:(id)a0;
- (id)succinctDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeElement:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_sortElements;
- (void)finalizeLayout;
- (id)display;
- (long long)displayType;

@end
