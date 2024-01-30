@class SXComponentView;
@protocol SXComponentInteractionHandler;

@interface SXComponentInteraction : NSObject

@property (readonly, weak, nonatomic) SXComponentView *componentView;
@property (readonly, nonatomic) id<SXComponentInteractionHandler> handler;
@property (readonly, nonatomic) unsigned long long types;

- (void).cxx_destruct;
- (BOOL)handlesType:(unsigned long long)a0;
- (id)initWithComponentView:(id)a0 handler:(id)a1 types:(unsigned long long)a2;

@end
