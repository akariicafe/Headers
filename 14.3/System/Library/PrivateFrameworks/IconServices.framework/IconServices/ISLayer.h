@class NSString, NSArray, NSMutableArray, ISColor;
@protocol ISEffect, ISCompositorResource;

@interface ISLayer : NSObject

@property (weak, nonatomic) ISLayer *internalSuperlayer;
@property (readonly, nonatomic) NSMutableArray *internalSublayers;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) id<ISEffect> effect;
@property (retain, nonatomic) ISColor *backgroundColor;
@property (retain, nonatomic) id<ISCompositorResource> content;
@property (retain, nonatomic) ISLayer *mask;
@property (readonly, nonatomic) ISLayer *superlayer;
@property (readonly, copy, nonatomic) NSArray *sublayers;

- (void)addSublayer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)superlayer;
- (id)debugDescription;
- (void)insertSublayer:(id)a0 atIndex:(unsigned int)a1;
- (void)removeFromSuperlayer;

@end
