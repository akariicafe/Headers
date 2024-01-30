@class NSString;
@protocol TSKStyleMapper;

@interface TSCHStyleMapper : NSObject <TSKStyleMapper>

@property (readonly) id<TSKStyleMapper> underlyingMapper;
@property (readonly, nonatomic) BOOL clientsMustRemap;
@property (nonatomic) BOOL forceMatchStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mappedStyleWithMapper:(id)a0 forStyle:(id)a1 bakeComputable:(BOOL)a2;
+ (id)mappedStylesWithMapper:(id)a0 forStyles:(id)a1 bakeComputable:(BOOL)a2;
+ (id)mapperWithMapper:(id)a0;
+ (void)replaceReferencedStylesInMap:(id)a0 withMapper:(id)a1;

- (id)initWithMapper:(id)a0;
- (void).cxx_destruct;
- (id)mappedStyleForStyle:(id)a0;
- (void)popMappingContext:(id)a0;
- (void)pushMappingContext:(id)a0;
- (id)targetStylesheet;
- (id)mappedStyleForStyle:(id)a0 bakeComputable:(BOOL)a1;
- (void)replaceReferencedStylesInMap:(id)a0;

@end
