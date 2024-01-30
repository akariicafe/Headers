@class NSString;
@protocol NFResolver;

@interface SXButtonComponentViewFactory : NSObject <SXComponentViewFactory>

@property (readonly, nonatomic) id<NFResolver> resolver;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)a0;
- (id)initWithResolver:(id)a0;

@end
