@class NSMutableSet, NSMutableDictionary;

@interface PBUIImageSlotRepository : NSObject {
    NSMutableSet *_lifetimes;
    NSMutableDictionary *_slots;
}

- (id)initWithWindowScene:(id)a0;
- (void).cxx_destruct;
- (id)urlForIdentifier:(id)a0;
- (long long)actualStyleForIdentifier:(id)a0;
- (void)allocateImageSlotForIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1 actualStyle:(long long)a2 url:(id)a3 lifetimeObject:(id)a4;
- (void)freeImageSlotWithIdentifier:(id)a0 lifetime:(id)a1;
- (BOOL)hasSlotForIdentifier:(id)a0;
- (id)ioSurfaceForIdentifier:(id)a0;
- (void)setImageSlot:(id)a0 forIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForIdentifier:(id)a0;

@end
